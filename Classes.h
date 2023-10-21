
#ifndef PROJECT_CLASSES_H
#define PROJECT_CLASSES_H
#include <string>
#include <vector>


class Classes {
public:
    Classes(const string& ClassCode, const string& UcCode, const string& Weekday, float StartHour, float Duration, const string& Type);
private:
    string ClassCode;
    string UcCode;
    string Weekday;
    float StarHour;
    float Duration;
    string Type;
    vector<string> enrolledStudents;
};


#endif //PROJECT_CLASSES_H
