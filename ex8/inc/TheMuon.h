#ifndef THEMUON_H
#define THEMUON_H

#include "SinhVien.h"
#include <string>

class TheMuon {
private:
    std::string maPhieuMuon;
    int ngayMuon;
    int hanTra;
    std::string soHieuSach;
    SinhVien sinhVien;

public:
    TheMuon();
    TheMuon(const std::string& maPhieuMuon, int ngayMuon, int hanTra, const std::string& soHieuSach, const SinhVien& sinhVien);

    void nhapThongTin();
    void hienThiThongTin() const;
    std::string getMaPhieuMuon() const;
};

#endif 
