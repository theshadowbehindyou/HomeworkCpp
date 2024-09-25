#include "../inc/InserviceStudent.h"
#include <iostream>

InServiceStudent::InServiceStudent() : Student(), trainingLocation("") {}

InServiceStudent::InServiceStudent(const std::string& id, const std::string& name, const std::string& birthDate, int admissionYear, float entranceScore, const std::string& location)
    : Student(id, name, birthDate, admissionYear, entranceScore), trainingLocation(location) {}

bool InServiceStudent::isRegular() const {
    return false;
}

void InServiceStudent::showInfo() const {
    Student::showInfo();
    std::cout << "Type: In-Service Student\n"
              << "Training Location: " << trainingLocation << std::endl;
}
