#ifndef NGUOI_H
#define NGUOI_H

#include <string>

class Nguoi {
private:
    std::string hoTen;
    int tuoi;
    std::string ngheNghiep;
    std::string soCMND; 

public:
    Nguoi(const std::string& hoTen, int tuoi, const std::string& ngheNghiep, const std::string& soCMND);

    std::string getHoTen() const;
    int getTuoi() const;
    std::string getNgheNghiep() const;
    std::string getSoCMND() const;

    void hienThiThongTin() const;
};

#endif
