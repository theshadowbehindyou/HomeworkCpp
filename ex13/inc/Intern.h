#ifndef INTERN_H
#define INTERN_H

#include "Employee.h"
#include <string>

class Intern : public Employee {
private:
    std::string majors;
    int semester;
    std::string universityName;

public:
    Intern(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, std::string majors, int semester, std::string universityName);
    void showInfo() const override;
};

#endif // INTERN_H


