#include "IndexPage.h"
#include "ControlManager.h"

IndexPage::IndexPage()
{
    InitializeComponent();
    InitializeStyle();
}

void IndexPage::InitializeComponent()
{
    lblName_ = ControlManager::CreateLabel(0, 0, "Name:");
    txtName_ = ControlManager::CreateTextBox(0, 1, "");
    btnSubmit_ = ControlManager::CreateButton(2, 1, "Submit");

    this->Children->Add(lblName_);
    this->Children->Add(txtName_);
    this->Children->Add(btnSubmit_);

    btnSubmit_->Click += gcnew RoutedEventHandler(this, &IndexPage::btnSubmit_Click);
}

void IndexPage::InitializeStyle()
{
    ControlManager::SetGrid(this, 4, 3, 100, 50);
    //Grid::ShowGridLines = true;

    txtName_->Width = 100;
    txtName_->Height = 25;

    btnSubmit_->Width = 50;
    btnSubmit_->Height = 25;

    lblName_->VerticalAlignment = Windows::VerticalAlignment::Center;
    txtName_->VerticalAlignment = Windows::VerticalAlignment::Center;
    btnSubmit_->VerticalAlignment = Windows::VerticalAlignment::Center;
    btnSubmit_->HorizontalAlignment = Windows::HorizontalAlignment::Center;
}

void IndexPage::btnSubmit_Click(Object^ sender, RoutedEventArgs^ e)
{
    String^ username = txtName_->Text;

    if (String::IsNullOrEmpty(username))
    {
        username = "Anonymous";
    }

    MessageBox::Show(String::Format("Hello {0}!", username));
}
