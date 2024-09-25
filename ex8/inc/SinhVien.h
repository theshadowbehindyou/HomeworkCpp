#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <string>

class SinhVien {
private:
    std::string hoTen;
    int tuoi;
    std::string lop;

public:
    SinhVien();
    SinhVien(const std::string& hoTen, int tuoi, const std::string& lop);

    void nhapThongTin();
    void hienThiThongTin() const;

    std::string getHoTen() const;
};

#endif 
