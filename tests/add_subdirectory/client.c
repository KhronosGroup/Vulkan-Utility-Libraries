#include <vulkan/layer/vk_layer_settings.h>

VkBool32 foobar() {
    VlLayerSettingSet layerSettingSet = VK_NULL_HANDLE;
    vlCreateLayerSettingSet("VK_LAYER_LUNARG_test", NULL, NULL, NULL, &layerSettingSet);

	VkBool32 result = vlHasLayerSetting(layerSettingSet, "setting_key") ? VK_TRUE : VK_FALSE;

    vlDestroyLayerSettingSet(layerSettingSet, NULL);

	return result;
}