
#ifndef PROJECT_UC_H
#define PROJECT_UC_H
#include <string>
#include <vector>

class UC {
public:
    UC(const string& ucCode, const string& classCode);
    void loadUC(const string& ucCode, const string& classCode);

private:
    string ucCode;
    vector<string> ClassCode;
};


#endif //PROJECT_UC_H
