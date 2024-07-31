#include <iostream>
#include <fstream>
#include <set>

#include "tokens.hpp"

using namespace std;

int main()
{
    // Load keyword and operator sets
    set<string> sOperators = tokens_OperatorSet();
    set<string> sSymbols = tokens_SymbolSet();

    cout << "Hello World" << endl;

    char ch;
    fstream fin("src/example_source_code/test.py", fstream::in);
    while (fin >> noskipws >> ch) {
        cout << ch << endl;
    }
    return 1;
}