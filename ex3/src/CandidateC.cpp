#include "../inc/CandidateC.h"
#include <iostream>

void CandidateC::showInfo() const {
    Candidate::showInfo();
    std::cout << ", Khoi thi: C (Van, Su, Dia)" << std::endl;
}

std::string CandidateC::getKhoiThi() const {
    return "C";
}
