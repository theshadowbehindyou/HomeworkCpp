#ifndef CONGNHAN_H
#define CONGNHAN_H

#include "Officer.h"

class CongNhan : public CanBo {
private:
    int level; 

public:
    CongNhan(const std::string& name, int age, const std::string& gender, const std::string& address, int level)
        : CanBo(name, age, gender, address), level(level) {}

    void display() const override {
        std::cout << "CongNhan - Name: " << name << ", Age: " << age << ", Gender: " << gender 
                  << ", Address: " << address << ", Level: " << level << std::endl;
    }
};

#endif 
