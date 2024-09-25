#ifndef TUYENSINH_H
#define TUYENSINH_H

#include "../inc/Candidate.h"
#include <vector>
#include <memory>

class TuyenSinh {
private:
    std::vector<std::shared_ptr<Candidate>> danhSachThiSinh;

public:
    void themThiSinh(const std::shared_ptr<Candidate>& thiSinh);
    void hienThiThiSinh() const;
    std::shared_ptr<Candidate> timKiemTheoSBD(const std::string& soBaoDanh) const;
};

#endif
