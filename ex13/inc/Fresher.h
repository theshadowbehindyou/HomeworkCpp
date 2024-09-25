#ifndef FRESHER_H
#define FRESHER_H

#include "Employee.h"
#include <string>

class Fresher : public Employee {
private:
    std::string graduationDate;
    std::string graduationRank;
    std::string education;

public:
    Fresher(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, std::string gradDate, std::string gradRank, std::string education);
    void showInfo() const override;
};

#endif // FRESHER_H

