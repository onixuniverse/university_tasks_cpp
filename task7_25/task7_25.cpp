#include "task7_25.h"
#include <vector>
#include <tuple>
#include <random>

using namespace System;
using namespace System::Windows::Forms;


std::vector<std::tuple<double, double>> getPoints() {
	std::vector<std::tuple<double, double>> points;

	for (int x = -100; x <= 100; x++) {
		double y = sqrt(abs(x - 1));
		points.push_back({ x, y });
	}

	return points;
}


[STAThreadAttribute]
int main(array<String^>^ args) {
	srand(time(0));
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project1::FunctionGraph form;
	Application::Run(% form);
}
