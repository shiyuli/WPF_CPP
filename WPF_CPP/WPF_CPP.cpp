#include <windows.h>
#include "MainWindow.h"

using namespace System;
using namespace System::Windows;

[STAThread]
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmd, int nCmd)
{
    Window^ win = gcnew MainWindow();
    Application^ app = gcnew Application();
    return app->Run(win);
}
