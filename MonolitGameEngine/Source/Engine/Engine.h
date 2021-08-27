#pragma once
#include "EnginePCH.h"

#define CREATEENGINE(x) Engine* CreateEngine() {return new x;}

class MONOLITENGINEAPI Engine
{
public:
	explicit Engine() noexcept {}
	virtual ~Engine() noexcept {}
public:
	virtual void StartupEngine() {}
	virtual void Initialize() {}
	virtual void Update() {}
};

Engine* CreateEngine();