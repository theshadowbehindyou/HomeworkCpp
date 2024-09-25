#include "../inc/CandidateA.h"
#include <iostream>

void CandidateA::showInfo() const {
    Candidate::showInfo();
    std::cout << ", Khoi thi: A (Toan, Ly, Hoa)" << std::endl;
}

std::string CandidateA::getKhoiThi() const {
    return "A";
}
