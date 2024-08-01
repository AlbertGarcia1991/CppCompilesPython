#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>

#include "tokens.hpp"

using namespace std;

int main()
{
    // Load keyword and operator sets
    set<string> sOperators = tokens_getOperatorsSet();
    set<string> sSymbols = tokens_getSymbolsSet();

    // Load the file to scan
    // TODO: This will need to be pass as argument to the current function
    ifstream file("src/example_source_code/test2.py");
    if (!file) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    char ch;
    vector<string> vTokens;
    vector<string> vCurrBuffer;
    while (file.get(ch)) { }
    return 1;
}