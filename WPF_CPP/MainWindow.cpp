#include "MainWindow.h"
#include "IndexPage.h"

MainWindow::MainWindow()
{
	InitializeComponent();
	InitializeStyle();
}

void MainWindow::InitializeComponent()
{
	IndexPage^ indexPage = gcnew IndexPage();
	this->Content = indexPage;
}

void MainWindow::InitializeStyle()
{
    Title = "Hello WPF";
    Width = 500;
    Height = 300;

	this->WindowStartupLocation = Windows::WindowStartupLocation::CenterScreen;
}
