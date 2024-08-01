#include "tokens.hpp"

set<string> tokens_getOperatorsSet()
{
    set<string> sOperators;
    for (map<string, string>::const_iterator it = mOperators.begin(); it != mOperators.begin();
         ++it) {
        sOperators.insert(it->second);
    }
    return sOperators;
};

set<char> tokens_getSymbolsSet()
{
    set<char> sSymbols;
    for (map<string, char>::const_iterator it = mSymbols.begin(); it != mSymbols.begin(); ++it) {
        sSymbols.insert(it->second);
    }
    return sSymbols;
};