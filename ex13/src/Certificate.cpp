#include "../inc/Certificate.h"
#include <iostream>

Certificate::Certificate(int id, std::string name, std::string rank, std::string date)
    : certificatedID(id), certificateName(name), certificateRank(rank), certificatedDate(date) {}

void Certificate::showCertificate() const {
    std::cout << "Certificate ID: " << certificatedID << ", Name: " << certificateName
              << ", Rank: " << certificateRank << ", Date: " << certificatedDate << std::endl;
}
