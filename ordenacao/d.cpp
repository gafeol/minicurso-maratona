#include "bits/stdc++.h"
using namespace std;

const int N = 1009;
int f[N], r[N], ind[N];

bool cmp(int i, int j){
    // o dragao de indice i deve vir antes do dragao de indice j na sequencia ordenada
    return (f[i] < f[j]);
}


int main (){
    int s, n;
    scanf("%d%d", &s, &n);
    for(int a=0;a<n;a++){
        scanf("%d%d", f+a, r+a);
        ind[a] = a;
    }
    sort(ind, ind+n, cmp);

    for(int a=0;a<n;a++){
        int i = ind[a];
        if(s > f[i]){
            s += r[i];
        }
        else{
            puts("NO");
            return 0;
        }
    }
    puts("YES");
}
