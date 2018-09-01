#pragma once
#include "ApplicationInfo.h"

class Renderer
{
public:
	Renderer(ApplicationInfo* info);
	~Renderer();

private:
	void _InitInstance();
	void _DeInitInstance();

	void _InitDevice();
	void _DeInitDevice();

private:
	VkInstance _instance = nullptr;
	VkDevice   _device   = nullptr;

	ApplicationInfo* _info;

};

