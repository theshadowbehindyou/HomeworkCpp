#ifndef SINHVIEN_H
#define SINHVIEN_H


#include <iostream>
#include <vector>
#include <memory>
#include "Result.h"

class Student{
protected:
    std::string studentID;
    std::string fullName;
    std::string birthDate;
    int admissionYear;
    int entranceScore;
    std::vector<Result> results;

public:
    Student();
    Student(const std::string& id, const std::string& name, const std::string& brithDate, int admissionYear, float entranceScore);

    virtual ~Student() = default;

    std::string getStudentID() const { return studentID; }
    std::string getFullName() const { return fullName; }
    int getAdmissionYear() const { return admissionYear; }
    float getEntranceScore() const { return entranceScore; }

    void setStudentID(const std::string& id){studentID = id;}
    void setFullName(const std::string& name){fullName = name;}
    void setBirthDate(const std::string& date) { birthDate = date; }
    void setAdmissionYear(int year) { admissionYear = year; }
    void setEntranceScore(float score) { entranceScore = score; }

    virtual bool isRegular() const = 0;
    void addResult(const Result& result);
    float getAverageScore(const std::string& semesterName) const;
    float getLatestAverageScore() const;
    virtual void showInfo() const;
    bool operator<(const Student& other) const;

};


#endif