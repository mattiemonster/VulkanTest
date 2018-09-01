#pragma once

#include <vulkan/vulkan.h>

struct ApplicationInfo
{
	VkApplicationInfo appInfo = {};

	const char* appName =       "Vulkan App";
	const char* engineName =    "Engine";
	int verMajor =              1;
	int verMinor =              0;
	int verRev =                0;
	int verEngineMajor =        1;
	int verEngineMinor =        0;
	int verEngineRev =          0;

	void create()
	{
		appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
		appInfo.pApplicationName = appName;
		appInfo.applicationVersion = VK_MAKE_VERSION(verMajor, verMinor, verRev);
		appInfo.pEngineName = engineName;
		appInfo.engineVersion = VK_MAKE_VERSION(verEngineMajor, 
			verEngineMinor, verEngineRev);
	}
};
