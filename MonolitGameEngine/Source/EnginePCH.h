#pragma once

#ifdef WIN32
#include <Windows.h>
#endif

#ifdef BUILD_DLL
	#define MONOLITENGINEAPI __declspec(dllexport)
#else
	#define MONOLITENGINEAPI __declspec(import)
#endif 
