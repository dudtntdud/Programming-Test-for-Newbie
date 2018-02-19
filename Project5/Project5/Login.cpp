#include "Login.h"
#include "regVehicle.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project5::regVehicle form;
	Application::Run(%form);
}