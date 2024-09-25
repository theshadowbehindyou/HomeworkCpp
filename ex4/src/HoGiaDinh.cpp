#include "../inc/HoGiaDinh.h"
#include <iostream>

HoGiaDinh::HoGiaDinh(int soNha, const std::vector<Nguoi>& thanhVien)
    : soNha(soNha), thanhVien(thanhVien) {}

int HoGiaDinh::getSoNha() const {
    return soNha;
}

const std::vector<Nguoi>& HoGiaDinh::getThanhVien() const {
    return thanhVien;
}

void HoGiaDinh::hienThiThongTin() const {
    std::cout << "So nha: " << soNha << std::endl;
    for (const auto& nguoi : thanhVien) {
        nguoi.hienThiThongTin();
    }
}
