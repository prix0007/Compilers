//
// Created by prix on 1/19/21.
//
#include <bits/stdc++.h>

using namespace std;

// Defining All Keywords
const string keywords[] = {
        "alignas",
        "alignof",
        "and",
        "and_eq",
        "asm",
        "atomic_cancel",
        "atomic_commit",
        "atomic_noexcept",
        "auto",
        "bitand",
        "bitor",
        "bool",
        "break",
        "case",
        "catch",
        "char",
        "char8_t",
        "char16_t",
        "char32_t",
        "class",
        "compl",
        "concept",
        "const",
        "consteval",
        "constexpr",
        "constinit",
        "const_cast",
        "continue",
        "co_await",
        "co_return",
        "co_yield",
        "decltype",
        "default",
        "delete",
        "do",
        "double",
        "dynamic_cast",
        "else",
        "enum",
        "explicit",
        "export",
        "extern",
        "false",
        "float",
        "for",
        "friend",
        "goto",
        "if",
        "inline",
        "int",
        "long",
        "mutable",
        "namespace",
        "new",
        "noexcept",
        "not",
        "not_eq",
        "nullptr",
        "operator",
        "or",
        "or_eq",
        "private",
        "protected",
        "public",
        "reflexpr",
        "register",
        "reinterpret_cast",
        "requires",
        "return",
        "short",
        "signed",
        "sizeof",
        "static",
        "static_assert",
        "static_cast",
        "struct",
        "switch",
        "synchronized",
        "template",
        "this",
        "thread_local",
        "throw",
        "true",
        "try",
        "typedef",
        "typeid",
        "typename",
        "union",
        "unsigned",
        "using",
        "virtual",
        "void",
        "volatile",
        "wchar_t",
        "while",
        "xor",
        "xor_eq"
};

void questionx() {
    std::cout<<"Hello From Question 1";
}

/*
The general rules for constructing names for variables (unique identifiers) are:

- Names can contain letters, digits and underscores -> Done
- Names must begin with a letter or an underscore (_) -> Done
- Names are case sensitive (myVar and myvar are different variables) -> Not Necessary to Check
- Names cannot contain whitespaces or special characters like !, #, %, etc. -> Done
- Reserved words (like C++ keywords, such as int) cannot be used as names

 */

bool isIdentifier(string identifier) {

    // Getting All Keywords Length
    int keywords_length = end(keywords)-begin(keywords);

    // Check for starting of Identifier
    if(!isalpha(identifier[0]) || identifier[0] == '_'){
        return false;
    }
    // Check for if any other characters in allowed space
    int identifier_length = identifier.length();
//    cout<<"Identifier Length: "<<identifier_length;
    for(int i=0; i<identifier_length; ++i){
        if(identifier[i] != '_' && !isalnum(identifier[i])){
            return false;
        }
    }
    // Check for if any in keywords
    for(int i=0;i<keywords_length; ++i){
//        cout<<"Keyword: " << keywords[i]<<endl;
        if(keywords[i] == identifier){
            return false;
        }
    }

    return true;
}