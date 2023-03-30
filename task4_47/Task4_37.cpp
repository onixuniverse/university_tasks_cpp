#include "Task4_47.h"
#include <msclr\marshal_cppstd.h>
#include <math.h>
#include <iostream>
#include <string>
#include <map>

using namespace System;
using namespace System::Windows::Forms;

const std::map<int, int> monthCode = { {1, 1}, {2, 4}, {3, 4}, {4, 0}, {5, 2}, {6, 5}, {7, 0}, {8, 3}, {9, 6}, {10, 1}, {11, 4}, {12, 6} };
const std::map<int, std::string> dayOfWeekCodes = { {0, "Saturday"}, {1, "Sunday"}, {2, "Monday"}, {3, "Tuesday"}, {4, "Wednesday"}, {5, "Thursday"}, {6, "Friday"} };

struct Date {
	int day;
	int month;
	int year;
};

System::String^ getDayOfWeek(int year, int month, int day) { 
	int centuryCode = 2, yearCode;
	std::string yearStr = std::to_string(year);
	int beginYear = stoi(std::string(1, yearStr[0]) + std::string(1, yearStr[1]));
	int endYear = stoi(std::string(1, yearStr[2]) + std::string(1, yearStr[3]));

	while (beginYear > 10) {
		if (centuryCode == 0)
			centuryCode = 8;

		beginYear--;
		centuryCode -= 2;
	}

	yearCode = (centuryCode + endYear + endYear / 4) % 7;

	int dayOfWeekCode = (day + monthCode.at(month) + yearCode) % 7;

	return gcnew String(dayOfWeekCodes.at(dayOfWeekCode).c_str());
}

bool checkCorrectnessDate(System::String^ numberDate, System::String^ monthDate, System::String^ yearDate, System::String^ dayOfWeek) {
	Date date;
	try {
		date.year = System::Int32::Parse(yearDate);
		date.month = System::Int32::Parse(monthDate);
		date.day = System::Int32::Parse(numberDate);
	}
	catch (FormatException^) {
		return false;
	}

	if (1000 <= date.year && date.year <= 3000) {
		if (0 < date.month && date.month <= 12) {
			int maxDays = 28 + (((int)(date.month + floor(date.month / 8))) % 2) + (2 % date.month) + (2 * floor(1 / date.month));
			if (((date.year % 100 != 0 && date.year % 4 == 0) || date.year % 400 == 0) && (date.month == 2))
				maxDays++;
			
			if (date.day <= maxDays){
				if (getDayOfWeek(date.year, date.month, date.day) == dayOfWeek)
					return true;
			}
		}
	}

	return false;
}


[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	task437::Task4_47 form;
	Application::Run(% form);
}
