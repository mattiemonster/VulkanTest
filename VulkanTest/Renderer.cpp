#include "Renderer.h"
#include <iostream>
#include <assert.h>
#include <vulkan/vulkan.h>



Renderer::Renderer(ApplicationInfo* info)
{
	_info = info;
	std::cout << "APP INFO  App name is: " << _info->appName << "\n";
	_InitInstance();
}

Renderer::~Renderer()
{
	_DeInitInstance();
}

void Renderer::_InitInstance()
{
	// Create vulkan instance

	VkInstanceCreateInfo instanceInfo {};
	instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	instanceInfo.pApplicationInfo = &_info->appInfo;

	auto res = vkCreateInstance(&instanceInfo, nullptr, &_instance);
	if (res == VK_ERROR_INCOMPATIBLE_DRIVER)
	{
		std::cout << "No compatible driver found\n";
		assert(0 && "VULKAN ERR  No compatible driver found");
		exit(-1);
	}
	else if (res != VK_SUCCESS)
	{
		std::cout << "Unknown vulkan instance creation error\n";
		assert(0 && "VULKAN ERR  Unknown instance creation error");
		exit(-1);
	}
	else {
		std::cout << "VULKAN SUCCESS  Created VkInstance\n";
	}
}

void Renderer::_DeInitInstance()
{
	std::cout << "VULAKN INFO  Destroying VkInstance\n";
	vkDestroyInstance(_instance, nullptr);
	_instance = nullptr;
}

void Renderer::_InitDevice()
{
}

void Renderer::_DeInitDevice()
{

}
