#include <bits/stdc++.h>
#include "Q1/question1.h"
#include "Utils/SymbolTable.h"

using namespace std;

std::vector<std::string> resplit(const std::string & s, std::string rgx_str = "\\s+") {

    std::vector<std::string> elems;
    std::regex rgx (rgx_str);

    std::sregex_token_iterator iter(s.begin(), s.end(), rgx, -1);
    std::sregex_token_iterator end;

    while (iter != end)  {
        //std::cout << "S43:" << *iter << std::endl;
        elems.push_back(*iter);
        ++iter;
    }

    return elems;

}

int main() {
    std::cout << "Hello. This is Lab1 for Compilers" << std::endl;

    // Question 1 Start

    // Getting the sample CPP file from Sample Directory
    ifstream sampleFile;
    sampleFile.open("/home/prix/Documents/6Semester/Compilers/Lab1/Sample/question1_input.cpp");
    string word;
    int counter = 0;
    if (!sampleFile) std::cerr << "Could not open the file!" << std::endl;
    while(sampleFile >> word){
        if(isIdentifier(word)){
            cout<<endl<<word;
            counter++;
        }
    }
    cout << endl << "Total Identifiers Found: "<<counter;

    sampleFile.close();
    // Question 1 End

    // Question 2 Start
    SymbolTable keywordsTable = (SymbolTable) SymbolTable();
    const int keywordsLength = end(keywords) - begin(keywords);
    cout<<endl<< "Keywords Length : "<<keywordsLength;

    counter = 0;

    for(int i=0; i<keywordsLength; ++i){
        if(keywordsTable.insert(keywords[i],"global","keyword", i)){
           counter++;
        }
    }
    if(counter == 97) {
        cout<<endl<<"All 97 words inserted.";
    }

    counter = 0;
    // Testing for Symbol Table Content at random 10 times
    for(int i=0; i<10; ++i){
       string type = typeid(keywordsTable.find(keywords[rand()%97])).name();
       if(type.length() > 0)
               counter++;
    }
    if(counter == 10){
        cout<<endl<<"All words found.";
    } else {
        cout<<endl<<"Some error found.";
    }

    counter = 0;
    sampleFile.open("/home/prix/Documents/6Semester/Compilers/Lab1/Sample/question1_input.cpp");
    if (!sampleFile) std::cerr << "Could not open the file!" << std::endl;
    string line;
    vector<string> words;
    string allLine;
    while(getline(sampleFile, line)){
        if(line.length()>3){
           words = resplit(line, "[, (><)#{};+*-_\"]");
           for(auto x:words){
               if(x.length()>0) {
                    string result = keywordsTable.find(x);
                    if(!(result == "-1")){
                        counter++;
                        cout<< endl << result;
                    }
               }
           }
        };
    }
    sampleFile.close();
    cout << endl << "Total Keywords Found: "<< counter;

    // Question 2 End

    // Question 3 Start
    counter = 0;
    sampleFile.open("/home/prix/Documents/6Semester/Compilers/Lab1/Sample/question1_input.cpp");
    if (!sampleFile) std::cerr << "Could not open the file!" << std::endl;
    while(getline(sampleFile, line)){
        if(line.length()>3){
            words = resplit(line, "[, (><)#{};+*-_\"]");
            for(auto x:words){
                if(x.length()>0 && x == "const") {
                    counter++;
                    cout<<endl<<x;
                }
            }
        };
    }

    cout << endl << "Total Constant Found in Program: "<< counter;

    sampleFile.close();

    // Question 3 End

    // Question 4 Start
    counter = 0;
    sampleFile.open("/home/prix/Documents/6Semester/Compilers/Lab1/Sample/question1_input.cpp");
    if (!sampleFile) std::cerr << "Could not open the file!" << std::endl;
    while(getline(sampleFile, line)){
        counter++;
    }
    cout << endl << "Total New Lines Found in Program: "<< counter;

    // Question 4 End

    // Question 5 Start

    // Question 5 End

    return 0;
}
