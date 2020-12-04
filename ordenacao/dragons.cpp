#include "bits/stdc++.h"
using namespace std;

const int MAXN = 1123;

int s, n;
int x[MAXN], y[MAXN];
int indDragao[MAXN];

bool cmp(int i, int j){ 
    // compara os dragoes de indice i e j
    // deve retornar se o dragao i deve vir antes que j na sequencia ordenada
    return  x[i] < x[j];    
}

int main (){
	scanf("%d%d", &s, &n);
	for(int a=0;a<n;a++){
        scanf("%d%d", x+a, y+a);
        indDragao[a] = a;
	}
    sort(indDragao, indDragao + n, cmp);
    for(int a=0;a<n;a++){
        int i = indDragao[a];
        if(s > x[i]){
            s += y[i];
        }
        else{
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    return 0;
}

