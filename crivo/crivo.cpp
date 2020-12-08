#include "bits/stdc++.h"
using namespace std;

const int N = 1000009;

bool ehcomp[N];

int main (){

    vector<int> primos;
    ehcomp[1] = true;
    for(int i=2;i<N;i++){
        if(ehcomp[i]) continue;
        primos.push_back(i);
        for(long long j=i;i*j < N;j++)
            ehcomp[i*j] = true;
    }

    printf("2 eh composto? %d\n", ehcomp[2]);
    puts("Primos: ");
    for(int x: primos){
        printf("%d ", x); 
    }

    puts("");
}

