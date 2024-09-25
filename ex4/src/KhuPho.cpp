#include "../inc/KhuPho.h"
#include <iostream>

void KhuPho::themHoGiaDinh(const HoGiaDinh& hoGiaDinh) {
    danhSachHoGiaDinh.push_back(hoGiaDinh);
}

void KhuPho::hienThiTatCaHoGiaDinh() const {
    for (const auto& hoGiaDinh : danhSachHoGiaDinh) {
        hoGiaDinh.hienThiThongTin();
        std::cout << "--------------------------" << std::endl;
    }
}
