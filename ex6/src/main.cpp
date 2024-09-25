#include "../inc/Student.h"
#include "../inc/School.h"
#include <iostream>

int main() {
    School school;
    int luaChon;

    do {
        std::cout << "1. Them hoc sinh\n2. Hien thi hoc sinh 20 tuoi\n"
                  << "3. Dem hoc sinh 23 tuoi que o DN\n4. Hien thi tat ca hoc sinh\n"
                  << "5. Thoat\nNhap lua chon: ";
        std::cin >> luaChon;
        std::cin.ignore(); 

        switch (luaChon) {
        case 1: {
            std::string ten, que;
            int tuoi;
            std::cout << "Nhap ho ten: ";
            std::getline(std::cin, ten);
            std::cout << "Nhap tuoi: ";
            std::cin >> tuoi;
            std::cin.ignore();
            std::cout << "Nhap que quan: ";
            std::getline(std::cin, que);

            Student hs(ten, tuoi, que);
            school.themHocSinh(hs);
            break;
        }
        case 2:
            school.hienThiHocSinh20tuoi();
            break;
        case 3:
            std::cout << "So hoc sinh 23 tuoi que o DN: " 
                      << school.demHocSinh23TuoiQueDN() << std::endl;
            break;
        case 4:
            school.hienThiTatCaHocSinh();
            break;
        case 5:
            std::cout << "Thoat chuong trinh." << std::endl;
            break;
        default:
            std::cout << "Lua chon khong hop le!" << std::endl;
        }
    } while (luaChon != 5);

    return 0;
}
