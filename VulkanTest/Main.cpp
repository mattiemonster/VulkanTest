
#include "Renderer.h"

#include <iostream>

int main()
{
	ApplicationInfo info = {};

	info.appName =          "Vulkan Test";
	info.engineName =       "Vulkan Test Engine";
	info.verEngineMajor =   1;
	info.verEngineMinor =   1;
	info.verEngineRev =     2;
	info.verMajor =         1;
	info.verMinor =         0;
	info.verRev =           0;

	info.create();

	Renderer r = Renderer(&info);

	std::cin.get();
	return 0;
}
