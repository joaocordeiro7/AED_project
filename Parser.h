
#ifndef PROJECT_PARSER_H
#define PROJECT_PARSER_H
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "Classes.h"
#include "UC.h"
#include "Student.h"

class Parser {
public:
    void parseUCs(const string& f, vector<UC>& ucs);
    void parseClasses(const string& f, vector<Classes>& classes);
    void parseStudent(const string& f, vector<Student>& students);
private:
    ifstream classFile;
    ifstream studentFile;
    vector<UC> ucs;
    vector<Student> students;
    vector<Classes> classes;
};


#endif //PROJECT_PARSER_H
