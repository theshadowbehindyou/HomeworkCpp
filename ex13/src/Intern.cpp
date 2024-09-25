#include "../inc/Intern.h"
#include <iostream>

Intern::Intern(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, std::string majors, int semester, std::string universityName)
    : Employee(id, fullName, birthDay, phone, email, 2), majors(majors), semester(semester), universityName(universityName) {}

void Intern::showInfo() const {
    std::cout << "Intern Employee - ID: " << id << ", Name: " << fullName << ", Majors: " << majors
              << ", Semester: " << semester << ", University: " << universityName << std::endl;
    for (const auto& cert : certificates) {
        cert.showCertificate();
    }
}
