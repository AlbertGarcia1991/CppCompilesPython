#include "tokens.hpp"

set<string> tokens_OperatorSet()
{
    set<string> tokens_OperatorSet;
    for (map<string, string>::const_iterator it = tokents_OperatorMap.begin();
         it != tokents_OperatorMap.begin(); ++it) {
        tokens_OperatorSet.insert(it->second);
    }
    return tokens_OperatorSet;
};

set<string> tokens_SymbolSet()
{
    set<string> tokens_SymbolSet;
    for (map<string, string>::const_iterator it = tokens_SymbolMap.begin();
         it != tokens_SymbolMap.begin(); ++it) {
        tokens_SymbolSet.insert(it->second);
    }
    return tokens_SymbolSet;
};