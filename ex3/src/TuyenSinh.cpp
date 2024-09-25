#include "../inc/TuyenSinh.h"
#include <iostream>

void TuyenSinh::themThiSinh(const std::shared_ptr<Candidate>& thiSinh) {
    danhSachThiSinh.push_back(thiSinh);
}

void TuyenSinh::hienThiThiSinh() const {
    for (const auto& thiSinh : danhSachThiSinh) {
        thiSinh->showInfo();
    }
}

std::shared_ptr<Candidate> TuyenSinh::timKiemTheoSBD(const std::string& soBaoDanh) const {
    for (const auto& thiSinh : danhSachThiSinh) {
        if (thiSinh->getSoBaoDanh() == soBaoDanh) {
            return thiSinh;
        }
    }
    return nullptr;
}
