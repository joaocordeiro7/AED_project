using namespace std;
#include <iostream>
#include "Parser.h"
#include "UC.h"

int main(){
    Parser parser;
    // ...

    // Parse data from CSV files and create UC objects
    std::vector<UC> ucs;
    parser.parseUCs("classes_per_uc.csv", ucs);

    // Load data for UC objects
    for (const UC& uc : ucs) {
        // Load UC data from the parsed data
        uc.loadUC(uc.getUCCode(), uc.getClassCode());
    }

    // ...

    return 0;
}