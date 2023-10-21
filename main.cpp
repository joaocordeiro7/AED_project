using namespace std;
#include <iostream>
#include "Parser.h"
#include "UC.h"

int main() {
    Parser parse;
    vector<UC> ucs;
    parse.parseUCs("classes_per_uc.csv", ucs);

    // Print the UC data
    for (const UC& uc : ucs) {
        cout << "UC Code: " << uc.getUCCode() << endl;
        cout << " class Codes: ";
        for (const string& classCode : uc.getClassCode()) {
            cout << classCode << " ";
        }
        cout << endl;
    }

    return 0;
}