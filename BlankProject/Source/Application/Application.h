#pragma once
#include "Engine/Engine.h"

class Application : public Engine
{
public:
	explicit Application() noexcept;
	virtual ~Application() noexcept;
public:

	virtual void StartupEngine() override;
	virtual void Initialize() override;
	virtual void Update() override;
};