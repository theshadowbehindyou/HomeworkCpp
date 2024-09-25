#include "../inc/KhuPho.h"
#include <iostream>
#include <vector>

Nguoi nhapNguoi() {
    std::string hoTen, ngheNghiep, soCMND;
    int tuoi;
    
    std::cin.ignore(); 
    std::cout << "Nhap ho ten: ";
    std::getline(std::cin, hoTen);
    std::cout << "Nhap tuoi: ";
    std::cin >> tuoi;
    std::cin.ignore(); 
    std::cout << "Nhap nghe nghiep: ";
    std::getline(std::cin, ngheNghiep);
    std::cout << "Nhap so CMND: ";
    std::getline(std::cin, soCMND);

    return Nguoi(hoTen, tuoi, ngheNghiep, soCMND);
}

HoGiaDinh nhapHoGiaDinh() {
    int soNha, soThanhVien;
    std::vector<Nguoi> thanhVien;

    std::cout << "Nhap so nha: ";
    std::cin >> soNha;
    std::cout << "Nhap so thanh vien trong gia dinh: ";
    std::cin >> soThanhVien;

    for (int i = 0; i < soThanhVien; ++i) {
        std::cout << "Nhap thong tin thanh vien thu " << i + 1 << std::endl;
        thanhVien.push_back(nhapNguoi());
    }

    return HoGiaDinh(soNha, thanhVien);
}

int main() {
    KhuPho khuPho;
    int soHoDan;

    std::cout << "Nhap so ho dan trong khu pho: ";
    std::cin >> soHoDan;

    for (int i = 0; i < soHoDan; ++i) {
        std::cout << "Nhap thong tin ho gia dinh thu " << i + 1 << std::endl;
        khuPho.themHoGiaDinh(nhapHoGiaDinh());
    }

    std::cout << "\nThong tin cac ho dan trong khu pho:" << std::endl;
    khuPho.hienThiTatCaHoGiaDinh();

    return 0;
}
