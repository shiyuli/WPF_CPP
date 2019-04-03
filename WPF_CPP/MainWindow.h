#pragma once

using namespace System;
using namespace System::Windows;
using namespace System::Windows::Controls;

public ref class MainWindow : public Window
{
public:
    MainWindow();

private:
	void InitializeComponent();
    void InitializeStyle();
};
