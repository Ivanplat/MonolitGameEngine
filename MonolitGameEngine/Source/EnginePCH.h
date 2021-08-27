#pragma once

#ifdef WIN32
#include <Windows.h>
#endif

#ifdef DLL_BUILD
	#define MONOLITENGINEAPI __declspec(dllexport)
#else
	#define MONOLITENGINEAPI __declspec(dllimport)
#endif 
