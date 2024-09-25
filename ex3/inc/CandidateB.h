#ifndef CANDIDATE_B_H
#define CANDIDATE_B_H

#include "../inc/Candidate.h"

class CandidateB : public Candidate {
public:
    CandidateB(const std::string& _soBaoDanh, const std::string& _hoTen, const std::string& _diaChi, int _mucUuTien)
        : Candidate(_soBaoDanh, _hoTen, _diaChi, _mucUuTien) {}

    void showInfo() const override;
    std::string getKhoiThi() const override;
};

#endif
