#ifndef REGULARSTUDENT_H
#define REGULARSTUDENT_H

#include "Student.h"

class RegularStudent : public Student{
public:
    RegularStudent();
    RegularStudent(const std::string& id, const std::string& name, const std::string& birthDate, int addmissionYear, float entranceScore);

    bool isRegular() const override;
    void showInfo() const override;
};

#endif