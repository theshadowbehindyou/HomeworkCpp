#ifndef KYSU_H
#define KYSU_H

#include "Officer.h"

class KySu : public CanBo {
private:
    std::string field; 

public:
    KySu(const std::string& name, int age, const std::string& gender, const std::string& address, const std::string& field)
        : CanBo(name, age, gender, address), field(field) {}

    void display() const override {
        std::cout << "KySu - Name: " << name << ", Age: " << age << ", Gender: " << gender 
                  << ", Address: " << address << ", Field: " << field << std::endl;
    }
};

#endif 
