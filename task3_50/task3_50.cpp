#include "Header.h"
#include "Task3_50.h"
#include <msclr\marshal_cppstd.h>
#include <string>
#include <tuple>

using namespace System;
using namespace System::Windows::Forms;


std::tuple<bool, int> canTransform(String^ sourceInput, String^ resultString) {
	std::string sourceInputUnmanaged = msclr::interop::marshal_as<std::string>(sourceInput); // fucking converting to normal string type
	std::string resultStringUnmanaged = msclr::interop::marshal_as<std::string>(resultString); // too...
	
	if (sourceInputUnmanaged.length() == resultStringUnmanaged.length()) {
		
		for (Int32 k = 0; k < sourceInputUnmanaged.length(); k++) {
			std::string copy = sourceInputUnmanaged;
			for (int i = 0; i < k; i++)
				copy += copy[k - i - 1];
			copy.erase(0, k);
			if (copy == resultStringUnmanaged)
				return { true, k };
		}
	}

	return { false, 0 };
}


[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	task350::Task3_50 form;
	Application::Run(% form);
}
