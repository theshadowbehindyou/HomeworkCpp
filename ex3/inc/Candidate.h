#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <string>
#include <iostream>

class Candidate {
protected:
    std::string soBaoDanh;
    std::string hoTen;
    std::string diaChi;
    int mucUuTien;

public:
    Candidate(const std::string& _soBaoDanh, const std::string& _hoTen, const std::string& _diaChi, int _mucUuTien)
        : soBaoDanh(_soBaoDanh), hoTen(_hoTen), diaChi(_diaChi), mucUuTien(_mucUuTien) {}

    virtual ~Candidate() = default;

    std::string getSoBaoDanh() const {
        return soBaoDanh;
    }

    virtual void showInfo() const {
        std::cout << "So bao danh: " << soBaoDanh
                  << ", Ho ten: " << hoTen
                  << ", Dia chi: " << diaChi
                  << ", Muc uu tien: " << mucUuTien;
    }

    virtual std::string getKhoiThi() const = 0;
};

#endif
