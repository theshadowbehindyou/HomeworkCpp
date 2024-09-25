#ifndef KHUPHO_H
#define KHUPHO_H

#include "HoGiaDinh.h"
#include <vector>

class KhuPho {
private:
    std::vector<HoGiaDinh> danhSachHoGiaDinh;

public:
    void themHoGiaDinh(const HoGiaDinh& hoGiaDinh);
    void hienThiTatCaHoGiaDinh() const;
};

#endif
