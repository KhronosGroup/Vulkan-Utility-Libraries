#include <vulkan/layer/vk_layer_settings.h>

bool foobar() { return vku::IsLayerSetting("layer_name", "setting_key"); }