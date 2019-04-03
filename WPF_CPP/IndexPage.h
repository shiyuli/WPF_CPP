#pragma once

using namespace System::Windows;
using namespace System::Windows::Controls;

ref class IndexPage : public Grid
{
public:
    IndexPage();

private:
    void InitializeComponent();
    void InitializeStyle();

    void btnSubmit_Click(Object^ sender, RoutedEventArgs^ e);

private:
    Label^ lblName_;
    TextBox^ txtName_;
    Button^ btnSubmit_;
};
