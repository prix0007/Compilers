//
// Created by prix on 1/19/21.
//

#include<bits/stdc++.h>
using namespace std;

const int MAX=100;

#ifndef LAB1_SYMBOLTABLE_H
#define LAB1_SYMBOLTABLE_H

class Node;

class SymbolTable {
    Node* head[MAX];

public:
    SymbolTable()
    {
        for (int i = 0; i < MAX; i++)
            head[i] = NULL;
    }

    int hashf(string id); // hash function
    bool insert(string id, string scope,
                string Type, int lineno);

    string find(string id);

    bool deleteRecord(string id);

    bool modify(string id, string scope,
                string Type, int lineno);
};


#endif //LAB1_SYMBOLTABLE_H
