#ifndef CANDIDATE_A_H
#define CANDIDATE_A_H

#include "../inc/Candidate.h"

class CandidateA : public Candidate {
public:
    CandidateA(const std::string& _soBaoDanh, const std::string& _hoTen, const std::string& _diaChi, int _mucUuTien)
        : Candidate(_soBaoDanh, _hoTen, _diaChi, _mucUuTien) {}

    void showInfo() const override;
    std::string getKhoiThi() const override;
};

#endif
