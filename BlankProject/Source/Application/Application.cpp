#include "Application.h"
#include "pch.h"
#include "Modules/Win32/WinEntry.h"

CREATEENGINE(Application)

Application::Application() noexcept
{

}

Application::~Application() noexcept
{
}

void Application::StartupEngine()
{
}

void Application::Initialize()
{
	MessageBox(0, L"HELLO", L"HELLOMESSAGE", 0);
}

void Application::Update()
{
}
