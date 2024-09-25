#include "../inc/ThuVien.h"
#include <iostream>

void QuanLyTheMuon::themTheMuon() {
    TheMuon theMuon;
    theMuon.nhapThongTin();
    danhSachTheMuon.push_back(theMuon);
}

void QuanLyTheMuon::xoaTheMuon(const std::string& maPhieuMuon) {
    for (auto it = danhSachTheMuon.begin(); it != danhSachTheMuon.end(); ++it) {
        if (it->getMaPhieuMuon() == maPhieuMuon) {
            danhSachTheMuon.erase(it);
            std::cout << "Da xoa the muon voi ma phieu muon: " << maPhieuMuon << std::endl;
            return;
        }
    }
    std::cout << "Khong tim thay the muon voi ma phieu muon: " << maPhieuMuon << std::endl;
}

void QuanLyTheMuon::hienThiDanhSach() const {
    for (const auto& theMuon : danhSachTheMuon) {
        theMuon.hienThiThongTin();
    }
}
