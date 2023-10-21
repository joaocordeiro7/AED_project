
#ifndef PROJECT_STUDENT_H
#define PROJECT_STUDENT_H
#include <string>
#include <vector>

class Student {
public:
        Student(const string& studentCode, const string& studentName);

private:
    string StudentCode;
    string StudentName;
    vector<string> enrolledStudents;
};


#endif //PROJECT_STUDENT_H
