#include "bits/stdc++.h"
using namespace std;

int main (){
    unordered_map<char, int> asciiTable;

    asciiTable['a'] = 97;
    asciiTable['b'] = 98;
    // ....
    //
    printf("ascii[%c] = %d\n", 'a', asciiTable['a']);

    if(asciiTable.find('b') == asciiTable.end())
        puts("nao encontrou a letra b na tabela");
    if(asciiTable.find('c') == asciiTable.end())
        puts("nao encontrou a letra c na tabela");
}

