using namespace std;
#ifndef PROJECT_STUDENT_H
#define PROJECT_STUDENT_H
#include <string>
#include <vector>
#include <iostream>

class Student {
public:
    Student(const string& studentCode, const string& studentName);

private:
    string studentCode;
    string studentName;
    vector<string> enrolledStudents;
};


#endif //PROJECT_STUDENT_H
