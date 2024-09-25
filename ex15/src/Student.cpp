#include "../inc/Student.h"
#include <iostream>
#include <algorithm>

Student::Student() : studentID(""), fullName(""), birthDate(""), admissionYear(0), entranceScore(0.0f) {}

Student::Student(const std::string& id, const std::string& name, const std::string& birthDate, int admissionYear, float entranceScore) 
    : studentID(id), fullName(name), birthDate(birthDate), admissionYear(admissionYear), entranceScore(entranceScore) {}

void Student::addResult(const Result& result) {
    results.push_back(result);
}

float Student::getAverageScore(const std::string& semesterName) const {
    for (const auto& result : results) {
        if (result.getSemesterName() == semesterName) {
            return result.getAverageScore();
        }
    }
    return -1; 
}

float Student::getLatestAverageScore() const {
    if (results.empty()) return -1;
    return results.back().getAverageScore();
}

void Student::showInfo() const {
    std::cout << "ID: " << studentID << "\n"
              << "Full Name: " << fullName << "\n"
              << "Birth Date: " << birthDate << "\n"
              << "Admission Year: " << admissionYear << "\n"
              << "Entrance Score: " << entranceScore << std::endl;
}

bool Student::operator<(const Student& other) const {
    if (isRegular() == other.isRegular()) {
        return admissionYear > other.admissionYear; 
    }
    return isRegular() < other.isRegular(); 
}
