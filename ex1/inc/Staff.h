#ifndef NHANVIEN_H
#define NHANVIEN_H

#include "Officer.h"

class NhanVien : public CanBo {
private:
    std::string job; 
public:
    NhanVien(const std::string& name, int age, const std::string& gender, const std::string& address, const std::string& job)
        : CanBo(name, age, gender, address), job(job) {}

    void display() const override {
        std::cout << "NhanVien - Name: " << name << ", Age: " << age << ", Gender: " << gender 
                  << ", Address: " << address << ", Job: " << job << std::endl;
    }
};

#endif 
