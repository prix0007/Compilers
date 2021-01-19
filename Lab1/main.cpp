#include <bits/stdc++.h>
#include "Q1/question1.h"

using namespace std;

int main() {
    std::cout << "Hello. This is Lab1 for Compilers" << std::endl;

    // Getting the sample CPP file from Sample Directory
    ifstream sampleFile;
    sampleFile.open("/home/prix/Documents/6Semester/Compilers/Lab1/Sample/question1_input.cpp");

    string word;
    if (!sampleFile) std::cerr << "Could not open the file!" << std::endl;
    while(sampleFile >> word){
        if(isIdentifier(word))
            cout<<endl<<word;
    }

    return 0;
}
