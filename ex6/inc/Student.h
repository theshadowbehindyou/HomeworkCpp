#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string hometown;

public:
    Student(const std::string& name, int age, const std::string& hometown);

    std::string getName() const;
    int getAge() const;
    std::string getHometown() const;

    void display() const;
};

#endif 
