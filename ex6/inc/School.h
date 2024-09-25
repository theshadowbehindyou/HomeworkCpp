#ifndef SCHOOL_H
#define SCHOOL_H

#include "Student.h"
#include <vector>
#include <string>

class School {
private:
    std::vector<Student> danhsachHocSinh;

public:
    void themHocSinh(const Student& hs);

    void hienThiHocSinh20tuoi() const;

    int demHocSinh23TuoiQueDN() const;

    void hienThiTatCaHocSinh() const;
};

#endif 
