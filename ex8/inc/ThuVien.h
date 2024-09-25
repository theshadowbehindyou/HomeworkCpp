#ifndef THUVIEN_H
#define THUVIEN_H

#include "TheMuon.h"
#include <vector>

class QuanLyTheMuon {
private:
    std::vector<TheMuon> danhSachTheMuon;

public:
    void themTheMuon();
    void xoaTheMuon(const std::string& maPhieuMuon);
    void hienThiDanhSach() const;
};

#endif 

