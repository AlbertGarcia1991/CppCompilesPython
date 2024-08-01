#include <iostream>
#include <fstream>
#include <set>
#include <algorithm>

#include "main.hpp"
#include "tokens.hpp"

inline const string sNewlineToken { "NL" };
inline const string sTabToken { "TAB" };

int main()
{
    // Load keyword and operator sets
    set<string> sOperators = tokens_getOperatorsSet();
    set<char> sSymbols = tokens_getSymbolsSet();

    // Load the file to scan
    // TODO: This will need to be pass as argument to the current function
    ifstream file("src/example_source_code/test_small.py");
    if (!file) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    char ch;
    bool bOperatorStream { false };
    vector<string> vTokens;
    string vCurrBuffer;
    while (file.get(ch)) {
        if (ch == mSymbols.at("whitespace")) {
            if (vCurrBuffer.size() > 0) {
                vTokens.push_back(vCurrBuffer);
                vCurrBuffer.clear();
            }
            bOperatorStream = false;
        } else if (ch == mSymbols.at("newline")) {
            if (vCurrBuffer.size() > 0) {
                vTokens.push_back(vCurrBuffer);
                vCurrBuffer.clear();
            }
            if (vTokens.back() == string { mSymbols.at("backslash") }) {
                vTokens.pop_back();
            } else {
                vTokens.push_back(sNewlineToken);
            }
            bOperatorStream = false;
        } else if (ch == mSymbols.at("tab")) {
            if (vCurrBuffer.size() > 0) {
                vTokens.push_back(vCurrBuffer);
                vCurrBuffer.clear();
            }
            vTokens.push_back(sTabToken);
            bOperatorStream = false;
        } else if ((isalnum(ch)) || (ch == '_')) {
            vCurrBuffer.push_back(ch);
            bOperatorStream = false;
        } else {
            if (vCurrBuffer.size() > 0) {
                if (bOperatorStream) {
                    vCurrBuffer.push_back(ch);
                } else {
                    vTokens.push_back(vCurrBuffer);
                    vCurrBuffer.clear();
                }
            }
            if (!bOperatorStream) {
                if (find(sBasicOperators.begin(), sBasicOperators.end(), ch)
                    != sBasicOperators.end()) {
                    vCurrBuffer.push_back(ch);
                    bOperatorStream = true;
                } else {
                    vTokens.push_back(string { ch });
                }
            }
        };
    };
    if (vCurrBuffer.size() > 0) {
        vTokens.push_back(vCurrBuffer);
    }

    printTokens(vTokens);

    return 1;
}

void printTokens(vector<string> vTokens)
{
    for (auto sTk : vTokens) {
        cout << "< " << sTk << " >";
        if (sTk == sNewlineToken) {
            cout << endl;
        }
    }
}