#include "../inc/School.h"
#include <iostream>

void School::themHocSinh(const Student& hs) {
    danhsachHocSinh.push_back(hs);
}

void School::hienThiHocSinh20tuoi() const {
    for (const auto& hs : danhsachHocSinh) {
        if (hs.getAge() == 20) {
            hs.display();
        };
    }
}

int School::demHocSinh23TuoiQueDN() const {
    int count = 0;
    for (const auto& hs : danhsachHocSinh) {
        if (hs.getAge() == 23 && hs.getHometown() == "DN") {
            count++;
        }
    }
    return count;
}

void School::hienThiTatCaHocSinh() const {
    for (const auto& hs : danhsachHocSinh) {
        hs.display();
    }
}
