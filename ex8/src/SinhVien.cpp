#include "../inc/ThuVien.h"
#include <iostream>

SinhVien::SinhVien() : hoTen(""), tuoi(0), lop("") {}

SinhVien::SinhVien(const std::string& hoTen, int tuoi, const std::string& lop)
    : hoTen(hoTen), tuoi(tuoi), lop(lop) {}

void SinhVien::nhapThongTin() {
    std::cout << "Nhap ho ten sinh vien: ";
    std::getline(std::cin, hoTen);
    std::cout << "Nhap tuoi sinh vien: ";
    std::cin >> tuoi;
    std::cin.ignore();
    std::cout << "Nhap lop cua sinh vien: ";
    std::getline(std::cin, lop);
}

void SinhVien::hienThiThongTin() const {
    std::cout << "Ho ten: " << hoTen << ", Tuoi: " << tuoi << ", Lop: " << lop << std::endl;
}

std::string SinhVien::getHoTen() const {
    return hoTen;
}
