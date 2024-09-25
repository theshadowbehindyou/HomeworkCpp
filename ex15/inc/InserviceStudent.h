#ifndef INSERVICESTUDENT_H
#define INSERVICESTUDENT_H

#include "Student.h"

class InServiceStudent : public Student {
private:
    std::string trainingLocation;

public:
    InServiceStudent();
    InServiceStudent(const std::string& id, const std::string& name, const std::string& birthDate, int admissionYear, float entranceScore, const std::string& location);

    bool isRegular() const override;

    void setTrainingLocation(const std::string& location) { trainingLocation = location; }
    std::string getTrainingLocation() const { return trainingLocation; }

    void showInfo() const override;
};

#endif 
