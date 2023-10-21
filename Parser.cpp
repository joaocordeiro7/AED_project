#include "Parser.h"
#include "UC.h"
#include "Classes.h"
#include "Student.h"
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>

void Parser::parseUCs(const string& f, vector<vector<string>> ucs){
    ifstream file(f);

    if(!file.is_open()){
        cerr << "Error: Unable to open the file" << endl;
        return;
    }
    string line;
    while(getline(f, line)) {
        vector<string> row;
        istringstream lineStream(line);
        string cell;

        while(getline(lineStream, cell, ',')){
            row.push_back(cell);
        }
        ucs.push_back(row);
        if (row.size() >= 2) {
            std::string ucCode = row[0];
            std::string classCode = row[1];

            UC newUC(ucCode, classCode);

            ucs.push_back(newUC);
        }
    }
    file.close();
}
void Parser::parseStudent(const string& f, vector<Student>& students){
    ifstream file(f);

    if (!file.is_open()) {
        cerr << "Error: Unable to open the file" << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        vector<string> row;
        istringstream lineStream(line);
        string cell;

        while (getline(lineStream, cell, ',')) {
            row.push_back(cell);
        }

        if (row.size() >= 2) {
            std::string studentCode = row[0];
            std::string studentName = row[1];

            Student newStudent(studentCode, studentName);

            students.push_back(newStudent);
        }
    }
    file.close();
}

void Parser::parseClasses(const string& f, vector<Classes>& classes) {
    ifstream file(f);

    if (!file.is_open()) {
        cerr << "Error: Unable to open the file" << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        vector<string> row;
        istringstream lineStream(line);
        string cell;

        while (getline(lineStream, cell, ',')) {
            row.push_back(cell);
        }

        if (row.size() >= 6) {
            std::string classCode = row[0];
            std::string ucCode = row[1];
            std::string weekday = row[2];
            double startHour = stod(row[3]);
            double duration = stod(row[4]);
            string type = row[5];

            Classes newClass(classCode, ucCode, weekday, startHour, duration, type);

            classes.push_back(newClass);
        }
    }

    file.close();
}