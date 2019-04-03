#include "IndexWindow.h"

IndexWindow::IndexWindow()
{
}

void IndexWindow::InitStyle()
{
    Title = "Hello WPF";
    Width = 1024;
    Height = 768;

    Button^ btn = gcnew Button();
	btn->Width = 50;
	btn->Height = 25;
	this->AddChild(btn);
}
