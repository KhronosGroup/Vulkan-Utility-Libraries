import json
import subprocess
import os
from inspect import getsourcefile


REPOS_REQUIRING_UPDATING = ['Vulkan-Headers']

def query_tags_from_git_repo(url):
    # Query the current tag version using git ls-remote
    command_with_args = ['git', 'ls-remote', '--refs', '--tags', '--sort=version:refname', url, "v1.*.*"]
    res = subprocess.run(command_with_args, check=True, capture_output=True, text=True)
    if res.returncode != 0:
        raise ValueError(f'Error: Failed query git for the list of tags from repo at {url}')

    output = res.stdout.splitlines()
    tags = []
    for line in output:
        l = line.split("refs/tags/")[-1]
        tags.append(l)
    if len(tags) == 0:
        raise ValueError(f'Error: No matching tags present from repo at {url}')
    return tags

def update_known_good_json():
    header_tags = query_tags_from_git_repo('https://github.com/charles-lunarg/Vulkan-Headers.git')

    # We sorted the list such that the most recent tag is last
    most_recent_tag = header_tags[-1]

    # Need a reliable way to get the absolute path to known_good.json.
    # Solution: call getsourcefile on the current module, extract the directory, then append 'known_good.json'.
    # This avoids relying on sys.argv[0] or cwd or the running environment
    known_good_path = os.path.join(os.path.dirname(getsourcefile(lambda:0)),'known_good.json')
    if not os.path.exists(known_good_path):
        raise ValueError(f'Error: known_good.json at path {known_good_path} does not exist')

    # Now load the current known_good.json file into memory
    known_good_json = None
    with open(known_good_path, encoding='utf-8') as known_good_file:
        known_good_json = json.load(known_good_file)

    print('Updating known_good.json to header tag '+ most_recent_tag)

    for repo in known_good_json['repos']:
        if repo['name'] in REPOS_REQUIRING_UPDATING:
            tags = query_tags_from_git_repo(repo['url'])
            if most_recent_tag not in tags:
                raise ValueError(f'Repo {repo['name']} at url {repo['url']} does not contain tag {most_recent_tag}, aborting')
            repo['commit'] = most_recent_tag

    with open(known_good_path, 'w', encoding='utf-8') as known_good_file:
        known_good_file.write(json.dumps(known_good_json, indent=4))


if __name__ == '__main__':
    update_known_good_json()
