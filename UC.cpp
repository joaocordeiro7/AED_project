using namespace std;
#include <iostream>
#include "UC.h"
#include <string>
#include <vector>

UC::UC(const string& ucCode, const string& classCode) : ucCode(ucCode) {
    ClassCode.push_back(classCode);
}
void UC::loadUC(const string& ucCode, const string& classCode) {
    this->ucCode = ucCode;
    ClassCode.push_back(classCode);

    // Print UC data to the console
    cout << "UC Code: " << ucCode << endl;
    for (const std::string& code : ClassCode) {
        cout << "Class Code: " << code << endl;
    }
    cout << "-------------------------" << endl;
}