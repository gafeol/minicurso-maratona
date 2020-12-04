#include "bits/stdc++.h"
using namespace std;

int main() {
    set<int> st;

    st.insert(2);
    st.insert(1);
    st.insert(3);
    for(int x: st)
        printf("%d\n", x);
    st.erase(2);
    printf("tamanho do set %d\n", st.size());

    printf("menor elemento %d\n", *st.begin());
    st.erase(st.begin());
    printf("menor elemento %d\n", *st.begin());


}
