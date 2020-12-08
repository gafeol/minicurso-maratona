#include "bits/stdc++.h"
using namespace std;

int main (){
    int n; 
    scanf("%d", &n);

    vector<int> s;

    for(int a=0;a<n;a++){
        int x;
        scanf("%d", &x);
        s.push_back(x);
    }

    vector<int> sum(n);
    sum[0] = s[0];
    for(int a=1;a<n;a++)
        sum[a] = sum[a-1] + s[a];

    int m;
    scanf("%d", &m);
    for(int a=0;a<m;a++){
        int ind;
        scanf("%d", &ind);


        // busca binaria - encontrar verme ind
        int l = 0, r = n-1;
        while(l < r){
            int mid = (l + r)/2;
            if(sum[mid] >= ind) {
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        printf("%d\n", l + 1);
    }
}
