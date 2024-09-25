#include "../inc/EmployeeManager.h"
#include "../inc/Experience.h"
#include "../inc/Fresher.h"
#include "../inc/Intern.h"
#include <iostream>
#include <algorithm>

EmployeeManager::~EmployeeManager() {
    for (auto emp : employees) {
        delete emp;
    }
}

void EmployeeManager::addEmployee(Employee* employee) {
    employees.push_back(employee);
}

void EmployeeManager::removeEmployee(int id) {
    auto it = std::remove_if(employees.begin(), employees.end(), [id](Employee* emp) {
        if (emp->getID() == id) {
            delete emp;
            return true;
        }
        return false;
    });
    
    if (it != employees.end()) {
        employees.erase(it, employees.end());
        std::cout << "Đã xóa nhân viên có ID " << id << ".\n";
    } else {
        std::cout << "Không tìm thấy nhân viên có ID " << id << ".\n";
    }
}

void EmployeeManager::updateEmployee(int id) {
    Employee* employee = findEmployee(id);
    if (employee) {
        std::cout << "Nhập thông tin mới cho nhân viên có ID: " << id << std::endl;
        std::string fullName, birthDay, phone, email;
        std::cout << "Nhập tên đầy đủ: ";
        std::cin.ignore();
        getline(std::cin, fullName);
        std::cout << "Nhập ngày sinh: ";
        getline(std::cin, birthDay);
        std::cout << "Nhập số điện thoại: ";
        getline(std::cin, phone);
        std::cout << "Nhập email: ";
        getline(std::cin, email);

        employee->setFullName(fullName);
        employee->setBirthDay(birthDay);
        employee->setPhone(phone);
        employee->setEmail(email);

        std::cout << "Thông tin nhân viên đã được cập nhật.\n";
    } else {
        std::cout << "Không tìm thấy nhân viên có ID này.\n";
    }
}

void EmployeeManager::showAllEmployees() const {
    for (const auto& emp : employees) {
        emp->showInfo();
        std::cout << "-------------------------\n";
    }
}

Employee* EmployeeManager::findEmployee(int id) const {
    for (const auto& emp : employees) {
        if (emp->getID() == id) {
            return emp;
        }
    }
    return nullptr;
}

void EmployeeManager::findAllInterns() const {
    for (const auto& emp : employees) {
        if (dynamic_cast<Intern*>(emp)) {
            emp->showInfo();
        }
    }
}

void EmployeeManager::findAllExperience() const {
    for (const auto& emp : employees) {
        if (dynamic_cast<Experience*>(emp)) {
            emp->showInfo();
        }
    }
}

void EmployeeManager::findAllFreshers() const {
    for (const auto& emp : employees) {
        if (dynamic_cast<Fresher*>(emp)) {
            emp->showInfo();
        }
    }
}

