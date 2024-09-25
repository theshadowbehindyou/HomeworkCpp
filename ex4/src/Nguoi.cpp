#include "../inc/Nguoi.h"
#include <iostream>

Nguoi::Nguoi(const std::string& hoTen, int tuoi, const std::string& ngheNghiep, const std::string& soCMND)
    : hoTen(hoTen), tuoi(tuoi), ngheNghiep(ngheNghiep), soCMND(soCMND) {}

std::string Nguoi::getHoTen() const {
    return hoTen;
}

int Nguoi::getTuoi() const {
    return tuoi;
}

std::string Nguoi::getNgheNghiep() const {
    return ngheNghiep;
}

std::string Nguoi::getSoCMND() const {
    return soCMND;
}

void Nguoi::hienThiThongTin() const {
    std::cout << "Ho ten: " << hoTen << ", Tuoi: " << tuoi 
              << ", Nghe nghiep: " << ngheNghiep << ", So CMND: " << soCMND << std::endl;
}
