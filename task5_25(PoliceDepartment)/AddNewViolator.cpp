#include "AddNewViolator.h"
#include "Templates.h"


void addViolator(System::String^ firstName, System::String^ lastName, System::String^ patronymic, System::String^ dateBirth, criminalRecord_T criminalRecord) {
	ViolatorStruct newViolater;
	newViolater.firstName = msclr::interop::marshal_as<std::string>(firstName);
	newViolater.lastName = msclr::interop::marshal_as<std::string>(lastName);
	newViolater.patronymic = msclr::interop::marshal_as<std::string>(patronymic);
	newViolater.dateBirth = msclr::interop::marshal_as<std::string>(dateBirth);

	newViolater.criminalRecord = criminalRecord;

	violators.push_back(newViolater);
}