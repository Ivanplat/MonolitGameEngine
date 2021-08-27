#include "EnginePCH.h"
#include "Engine/Engine.h"

extern Engine* CreateEngine();

int CALLBACK WinMain(HINSTANCE, HINSTANCE, LPSTR, INT)
{
	auto GEngine = CreateEngine();
	if (!GEngine)
	{
		MessageBox(0, L"Can not create ENGINE!!!", L"Error", MB_ICONERROR | MB_OK);
	}

	GEngine->Initialize();
	GEngine->StartupEngine();
	GEngine->Update();

	MSG msg{ 0 };

	while (msg.message != WM_QUIT)
	{
		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}


	return 0;
}