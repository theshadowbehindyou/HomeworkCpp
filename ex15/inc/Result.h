#ifndef RESULT_H
#define RESULT_H

#include <string>

class Result {
private:
    std::string semesterName;
    float averageScore;

public:
    Result();
    Result(const std::string& semester, float score);

    std::string getSemesterName() const { return semesterName; }
    float getAverageScore() const { return averageScore; }

    void setSemesterName(const std::string& semester) { semesterName = semester; }
    void setAverageScore(float score) { averageScore = score; }
};

#endif 
