#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>
#include "Certificate.h"

class Employee {
protected:
    int id;
    std::string fullName;
    std::string birthDay;
    std::string phone;
    std::string email;
    int employee_type;
    std::vector<Certificate> certificates;

public:
    static int employee_count;

    Employee(int id, std::string fullName, std::string birthDay, std::string phone, std::string email, int employee_type);
    virtual ~Employee();

    virtual void showInfo() const = 0; // Abstract method
    void addCertificate(const Certificate& cert);

    int getID() const;
    int getType() const;
    std::string getFullName() const { return fullName; }
    std::string getBirthDay() const { return birthDay; }
    std::string getPhone() const { return phone; }
    std::string getEmail() const { return email; }

    // Setter
    void setFullName(const std::string& name) { fullName = name; }
    void setBirthDay(const std::string& day) { birthDay = day; }
    void setPhone(const std::string& phone) { this->phone = phone; }
    void setEmail(const std::string& email) { this->email = email; }

};

#endif // EMPLOYEE_H
