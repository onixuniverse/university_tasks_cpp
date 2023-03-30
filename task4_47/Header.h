#ifndef HEADER__H
#define HEADER__H
#include <string>

bool checkCorrectnessDate(System::String^ numberDate, System::String^ monthDate, System::String^ yearDate, System::String^ dayOfWeek);
System::String^ getDayOfWeek(int year, int month, int day);

#endif
