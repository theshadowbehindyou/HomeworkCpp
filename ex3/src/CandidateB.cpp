#include "../inc/CandidateB.h"
#include <iostream>

void CandidateB::showInfo() const {
    Candidate::showInfo();
    std::cout << ", Khoi thi: B (Toan, Hoa, Sinh)" << std::endl;
}

std::string CandidateB::getKhoiThi() const {
    return "B";
}
