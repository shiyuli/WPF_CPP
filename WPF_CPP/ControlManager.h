#pragma once
#include <cstdint>

using namespace System;
using namespace System::Windows::Controls;

ref class ControlManager
{
public:
	static ControlManager();

	static Button^ CreateButton(uint32_t row, uint32_t column, String^ text);
	static Label^ CreateLabel(uint32_t row, uint32_t column, String^ text);
	static TextBox^ CreateTextBox(uint32_t row, uint32_t column, String^ text);
	static void SetGrid(Grid^ target, uint32_t rows, uint32_t columns, uint32_t width, uint32_t height);

private:
	ControlManager();

	static void SetLocation(Control^ target, uint32_t row, uint32_t column);
};

