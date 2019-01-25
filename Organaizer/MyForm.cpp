#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Organaizer::MyForm form;
	Application::Run(%form);
}