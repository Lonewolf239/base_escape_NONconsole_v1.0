#include "loading.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


int main(array <String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	baseescapev40::loading form;
	baseescapev40::menu form1;
	baseescapev40::CP_loading form2;
	baseescapev40::Game form3;
	baseescapev40::CP_loading2 form4;
	baseescapev40::yard form5;
	baseescapev40::CP_loading3 form6;
	baseescapev40::first_floor form7;
	baseescapev40::CP_loading4 form8;
	baseescapev40::second_floor form9;
	Application::Run(% form);
	Application::Run(% form1);
	Application::Run(% form2);
	Application::Run(% form3);
	Application::Run(% form4);
	Application::Run(% form5);
	Application::Run(% form6);
	Application::Run(% form7);
	Application::Run(% form8);
	Application::Run(% form9);
	return 0;
}

