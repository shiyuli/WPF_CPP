#include <windows.h>
#include "IndexWindow.h"

using namespace System;
using namespace System::Windows;

[STAThread]
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmd, int nCmd)
{
    Window^ win = gcnew IndexWindow();
    Application^ app = gcnew Application();
    return app->Run(win);
}
