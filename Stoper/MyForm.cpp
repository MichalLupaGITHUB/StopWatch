#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread] // Uruchomienie wątku

void Main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); // odwołanie do www
	Stoper::MyForm form;
	Application::Run(%form);
}


