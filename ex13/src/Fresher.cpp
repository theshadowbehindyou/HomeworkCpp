#include "../inc/Fresher.h"
#include <iostream>

Fresher::Fresher(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, std::string gradDate, std::string gradRank, std::string education)
    : Employee(id, fullName, birthDay, phone, email, 1), graduationDate(gradDate), graduationRank(gradRank), education(education) {}

void Fresher::showInfo() const {
    std::cout << "Fresher Employee - ID: " << id << ", Name: " << fullName << ", Graduation: " << graduationDate
              << ", Rank: " << graduationRank << ", Education: " << education << std::endl;
    for (const auto& cert : certificates) {
        cert.showCertificate();
    }
}
