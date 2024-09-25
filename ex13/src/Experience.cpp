#include "../inc/Experience.h"
#include <iostream>

Experience::Experience(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, int expInYear, std::string proSkill)
    : Employee(id, fullName, birthDay, phone, email, 0), expInYear(expInYear), proSkill(proSkill) {}

void Experience::showInfo() const {
    std::cout << "Experience Employee - ID: " << id << ", Name: " << fullName << ", Exp: " << expInYear
              << " years, Pro Skill: " << proSkill << std::endl;
    for (const auto& cert : certificates) {
        cert.showCertificate();
    }
}
