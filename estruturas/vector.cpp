#include "bits/stdc++.h"
using namespace std;

int main (){
    vector<int> v;

    for(int i=0;i<5;i++){
        v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        printf("v[%d] = %d\n", i, v[i]);
    }

    v.pop_back();

    for(int x: v)
        printf("%d\n", x);
}

