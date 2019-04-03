#include "ControlManager.h"

using namespace System::Windows;
using namespace System::Windows::Media;

ControlManager::ControlManager()
{
}

static ControlManager::ControlManager()
{
}

Button^ ControlManager::CreateButton(uint32_t row, uint32_t column, String^ text)
{
	Button^ button = gcnew Button();
	button->Content = text;

	SetLocation(button, row, column);

	return button;
}

Label^ ControlManager::CreateLabel(uint32_t row, uint32_t column, String^ text)
{
	Label^ label = gcnew Label();
	label->Content = text;

	SetLocation(label, row, column);

	return label;
}

TextBox^ ControlManager::CreateTextBox(uint32_t row, uint32_t column, String^ text)
{
	TextBox^ textBox = gcnew TextBox();
	textBox->Text = text;
	textBox->VerticalContentAlignment = VerticalAlignment::Center;

	SetLocation(textBox, row, column);

	return textBox;
}

void ControlManager::SetGrid(Grid^ target, uint32_t rows, uint32_t columns, uint32_t width, uint32_t height)
{
	array<ColumnDefinition^>^ columnDef = gcnew array<ColumnDefinition^>(4);
	array<RowDefinition^>^ rowDef = gcnew array<RowDefinition^>(6);

	// Set up the Grid's row definitions.
	for (int i = 0; i < rows; ++i)
	{
		rowDef[i] = gcnew RowDefinition();
		rowDef[i]->Height = GridLength(height, GridUnitType::Pixel);
		target->RowDefinitions->Add(rowDef[i]);
	}

	// Set up the Grid's column definitions.
	for (int i = 0; i < columns; ++i)
	{
		columnDef[i] = gcnew ColumnDefinition();
		columnDef[i]->Width = GridLength(width, GridUnitType::Pixel);
		target->ColumnDefinitions->Add(columnDef[i]);
	}
}

void ControlManager::SetLocation(Control^ target, uint32_t row, uint32_t column)
{
	Grid::SetRow(target, row);
	Grid::SetColumn(target, column);
}
