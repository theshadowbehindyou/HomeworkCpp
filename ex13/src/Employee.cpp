#include "../inc/Employee.h"
#include <iostream>

int Employee::employee_count = 0;

Employee::Employee(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, int employee_type)
    : id(id), fullName(fullName), birthDay(birthDay), phone(phone), email(email), employee_type(employee_type) {
    employee_count++;
}

Employee::~Employee() {
    employee_count--;
}

int Employee::getID() const {
    return id;
}

int Employee::getType() const {
    return employee_type;
}

void Employee::addCertificate(const Certificate& cert) {
    certificates.push_back(cert);
}
