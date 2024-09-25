#include "../inc/Student.h"
#include <iostream>

Student::Student(const std::string& name, int age, const std::string& hometown)
    : name(name), age(age), hometown(hometown) {}

std::string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

std::string Student::getHometown() const {
    return hometown;
}

void Student::display() const {
    std::cout << "Ho ten: " << name << ", Tuoi: " << age 
              << ", Que quan: " << hometown << std::endl;
}
