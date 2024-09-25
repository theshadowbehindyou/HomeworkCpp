#include "../inc/Department.h"
#include <iostream>
#include <algorithm>
#include <map>

Department::Department(const std::string& name) : name(name) {}

void Department::addStudent(const std::shared_ptr<Student>& student) {
    students.push_back(student);
}

int Department::getTotalRegularStudents() const {
    return std::count_if(students.begin(), students.end(), [](const std::shared_ptr<Student>& student) {
        return student->isRegular();
    });
}

std::shared_ptr<Student> Department::findStudentWithHighestEntranceScore() const {
    return *std::max_element(students.begin(), students.end(), [](const std::shared_ptr<Student>& a, const std::shared_ptr<Student>& b) {
        return a->getEntranceScore() < b->getEntranceScore();
    });
}

std::vector<std::shared_ptr<InServiceStudent>> Department::findInServiceStudentsByLocation(const std::string& location) const {
    std::vector<std::shared_ptr<InServiceStudent>> result;
    for (const auto& student : students) {
        if (!student->isRegular()) {
            auto inServiceStudent = std::dynamic_pointer_cast<InServiceStudent>(student);
            if (inServiceStudent->getTrainingLocation() == location) {
                result.push_back(inServiceStudent);
            }
        }
    }
    return result;
}

std::shared_ptr<Student> Department::findStudentWithHighestAverageScore() const {
    return *std::max_element(students.begin(), students.end(), [](const std::shared_ptr<Student>& a, const std::shared_ptr<Student>& b) {
        return a->getLatestAverageScore() < b->getLatestAverageScore();
    });
}

void Department::sortStudents() {
    std::sort(students.begin(), students.end(), [](const std::shared_ptr<Student>& a, const std::shared_ptr<Student>& b) {
        return *a < *b;
    });
}

void Department::showAllStudents() const {
    for (const auto& student : students) {
        student->showInfo();
        std::cout << "---------------------" << std::endl;
    }
}

std::map<int, int> Department::countStudentsByAdmissionYear() const {
    std::map<int, int> countMap;
    for (const auto& student : students) {
        countMap[student->getAdmissionYear()]++;
    }
    return countMap;
}
void Department::listTopStudentsWithLatestGPA(float minGPA) const {
    bool found = false;
    for (const auto& student : students) {
        float latestGPA = student->getLatestAverageScore();
        if (latestGPA >= minGPA) {
            if (!found) {
                std::cout << "Danh sách sinh viên có điểm trung bình kỳ cuối >= " << minGPA << ":" << std::endl;
            }
            student->showInfo();
            found = true;
        }
    }
    if (!found) {
        std::cout << "Không có sinh viên nào có điểm trung bình kỳ cuối >= " << minGPA << std::endl;
    }
}

