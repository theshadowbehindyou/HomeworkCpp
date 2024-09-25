#include "../inc/ThuVien.h"
#include <iostream>

int main() {
    QuanLyTheMuon quanLy;
    int luaChon;

    do {
        std::cout << "1. Them the muon\n2. Xoa the muon\n3. Hien thi danh sach the muon\n4. Thoat\n";
        std::cout << "Nhap lua chon: ";
        std::cin >> luaChon;
        std::cin.ignore(); 

        switch (luaChon) {
            case 1:
                quanLy.themTheMuon();
                break;
            case 2: {
                std::string maPhieuMuon;
                std::cout << "Nhap ma phieu muon can xoa: ";
                std::getline(std::cin, maPhieuMuon);
                quanLy.xoaTheMuon(maPhieuMuon);
                break;
            }
            case 3:
                quanLy.hienThiDanhSach();
                break;
            case 4:
                std::cout << "Thoat chuong trinh." << std::endl;
                break;
            default:
                std::cout << "Lua chon khong hop le!" << std::endl;
        }
    } while (luaChon != 4);

    return 0;
}
