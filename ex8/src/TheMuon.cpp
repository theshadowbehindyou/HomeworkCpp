#include "../inc/TheMuon.h"
#include <iostream>

TheMuon::TheMuon() : maPhieuMuon(""), ngayMuon(0), hanTra(0), soHieuSach("") {}

TheMuon::TheMuon(const std::string& maPhieuMuon, int ngayMuon, int hanTra, const std::string& soHieuSach, const SinhVien& sinhVien)
    : maPhieuMuon(maPhieuMuon), ngayMuon(ngayMuon), hanTra(hanTra), soHieuSach(soHieuSach), sinhVien(sinhVien) {}

void TheMuon::nhapThongTin() {
    std::cout << "Nhap ma phieu muon: ";
    std::getline(std::cin, maPhieuMuon);
    std::cout << "Nhap ngay muon: ";
    std::cin >> ngayMuon;
    std::cout << "Nhap han tra: ";
    std::cin >> hanTra;
    std::cin.ignore();
    std::cout << "Nhap so hieu sach: ";
    std::getline(std::cin, soHieuSach);
    sinhVien.nhapThongTin();
}

void TheMuon::hienThiThongTin() const {
    std::cout << "Ma phieu muon: " << maPhieuMuon << ", Ngay muon: " << ngayMuon
              << ", Han tra: " << hanTra << ", So hieu sach: " << soHieuSach << std::endl;
    sinhVien.hienThiThongTin();
}

std::string TheMuon::getMaPhieuMuon() const {
    return maPhieuMuon;
}
