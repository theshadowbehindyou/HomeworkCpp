#ifndef HOGIADINH_H
#define HOGIADINH_H

#include "Nguoi.h"
#include <vector>
#include <string>

class HoGiaDinh {
private:
    int soNha;
    std::vector<Nguoi> thanhVien;

public:
    HoGiaDinh(int soNha, const std::vector<Nguoi>& thanhVien);

    int getSoNha() const;
    const std::vector<Nguoi>& getThanhVien() const;

    void hienThiThongTin() const;
};

#endif
