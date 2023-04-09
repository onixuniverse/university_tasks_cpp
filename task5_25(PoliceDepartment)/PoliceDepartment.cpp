#include "PoliceDepartment.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	PoliceDepartment::PoliceDepartment form;
	Application::Run(% form);
}
