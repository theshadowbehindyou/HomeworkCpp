#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include <vector>
#include "Employee.h"

class EmployeeManager {
private:
    std::vector<Employee*> employees;

public:
    EmployeeManager() = default;
    ~EmployeeManager();

    void addEmployee(Employee* employee);      // Thêm nhân viên
    void removeEmployee(int id);               // Xóa nhân viên theo ID
    void updateEmployee(int id);               // Sửa thông tin nhân viên
    void showAllEmployees() const;             // Hiển thị tất cả nhân viên
    Employee* findEmployee(int id) const;      // Tìm nhân viên theo ID
    void findAllInterns() const;               // Tìm tất cả nhân viên Intern
    void findAllExperience() const;            // Tìm tất cả nhân viên Experience
    void findAllFreshers() const;              // Tìm tất cả nhân viên Fresher
};

#endif // EMPLOYEEMANAGER_H
