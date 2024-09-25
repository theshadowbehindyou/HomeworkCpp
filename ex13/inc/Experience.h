#ifndef EXPERIENCE_H
#define EXPERIENCE_H

#include "Employee.h"
#include <string>

class Experience : public Employee {
private:
    int expInYear;
    std::string proSkill;

public:
    Experience(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, int expInYear, std::string proSkill);
    void showInfo() const override;
};

#endif // EXPERIENCE_H
