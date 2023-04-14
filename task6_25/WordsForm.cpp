#include <iostream>
#include <fstream>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "WordsForm.h"
#include "Templates.h"


void readFile(System::String^ inputFilePathManaged) {
	std::string inputFilePath = msclr::interop::marshal_as<std::string>(inputFilePathManaged);

	std::ifstream inputFile(inputFilePath);

	std::string word;
	while (inputFile >> word) {
		words.push_back(word);
	}
	
	inputFile.close();
}



[System::STAThreadAttribute]
int main(array<System::String^>^ args) {
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	System::Windows::Forms::Application::EnableVisualStyles();
	task625::WordsForm form;
	System::Windows::Forms::Application::Run(% form);
}


