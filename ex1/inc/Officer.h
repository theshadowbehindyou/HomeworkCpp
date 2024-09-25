// #ifndef CANBO_H
// #define CANBO_H

// #include <string>
// #include <iostream>

// class CanBo {
// protected:
//     std::string name;
//     int age;
//     std::string gender;
//     std::string address;

// public:
//     CanBo(const std::string& name, int age, const std::string& gender, const std::string& address)
//         : name(name), age(age), gender(gender), address(address) {}

//     virtual ~CanBo() {}

//     // Phương thức ảo để đa hình
//     virtual void display() const = 0;
// };

// #endif // CANBO_H
#ifndef CANBO_H
#define CANBO_H

#include <iostream>
#include <string>

class CanBo {
protected:
    std::string name;
    int age;
    std::string gender;
    std::string address;

public:
    CanBo(const std::string& name, int age, const std::string& gender, const std::string& address)
        : name(name), age(age), gender(gender), address(address) {}

    virtual void display() const {
        std::cout << "Name: " << name << ", Age: " << age
                  << ", Gender: " << gender << ", Address: " << address << std::endl;
    }

   std::string getName() const {
        return name;
    }

    virtual ~CanBo() = default; 
};

#endif 
