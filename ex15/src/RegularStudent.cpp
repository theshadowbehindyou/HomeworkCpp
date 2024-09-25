#include "../inc/RegularStudent.h"
#include <iostream>

RegularStudent::RegularStudent() : Student() {}

RegularStudent::RegularStudent(const std::string& id, const std::string& name, const std::string& birthDate, int admissionYear, float entranceScore)
    : Student(id, name, birthDate, admissionYear, entranceScore) {}

bool RegularStudent::isRegular() const {
    return true;
}

void RegularStudent::showInfo() const {
    Student::showInfo();
    std::cout << "Type: Regular Student" << std::endl;
}
