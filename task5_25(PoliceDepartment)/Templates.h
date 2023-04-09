#ifndef TEMPLATES__H
#define TEMPLATES__H
#include <vector>
#include <variant>
#include <string>
#include <msclr\marshal_cppstd.h>

using criminalRecord_T = std::variant<bool, std::string, int>;

struct ViolatorStruct {
	std::string firstName;
	std::string lastName;
	std::string patronymic;
	std::string dateBirth;
	criminalRecord_T criminalRecord;
};

inline std::vector<ViolatorStruct> violators;

void addViolator(System::String^ firstName, System::String^ lastName, System::String^ patronymic, System::String^ dateBirth, criminalRecord_T criminalRecord);

#endif