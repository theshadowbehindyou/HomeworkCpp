#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <vector>
#include <string>
#include <memory>
#include<map>
#include "Student.h"
#include "InserviceStudent.h"

class Department {
private:
    std::string name;
    std::vector<std::shared_ptr<Student>> students;

public:
    Department(const std::string& name);

    void addStudent(const std::shared_ptr<Student>& student);

    int getTotalRegularStudents() const;

    std::shared_ptr<Student> findStudentWithHighestEntranceScore() const;

    std::vector<std::shared_ptr<InServiceStudent>> findInServiceStudentsByLocation(const std::string& location) const;

    std::shared_ptr<Student> findStudentWithHighestAverageScore() const;

    void sortStudents();

    void showAllStudents() const;
    void listTopStudentsWithLatestGPA(float minGPA) const;
    std::map<int, int> countStudentsByAdmissionYear() const;
};

#endif // DEPARTMENT_H
