#include "tokens.hpp"

set<string> tokens_OperatorSet(void)
{
    set<string> tokens_OperatorSet;
    for (map<string, string>::const_iterator it = tokents_OperatorMap.begin(); it != tokents_OperatorMap.begin();
         ++it) {
        tokens_OperatorSet.insert(it->second);
    }
    return tokens_OperatorSet;
};

set<string> tokens_OperatorSet(void)
{
    set<string> tokens_KeywordSet;
    for (map<string, string>::const_iterator it = tokens_SymbolMap.begin(); it != tokens_SymbolMap.begin(); ++it) {
        tokens_KeywordSet.insert(it->second);
    }
    return tokens_KeywordSet;
};