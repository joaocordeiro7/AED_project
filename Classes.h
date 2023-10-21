using namespace std;
#ifndef PROJECT_CLASSES_H
#define PROJECT_CLASSES_H
#include <string>
#include <vector>
#include <iostream>


class Classes {
public:
    Classes(const string& ClassCode, const string& UcCode, const string& Weekday, float StartHour, float Duration, const string& Type);
private:
    string ClassCode;
    string UcCode;
    string Weekday;
    float StartHour;
    float Duration;
    string Type;
};


#endif //PROJECT_CLASSES_H
