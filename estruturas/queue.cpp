#include "bits/stdc++.h"
using namespace std;

int main (){
    puts("Testando a queue:");
    queue<int> q;
    q.push(1);
    q.push(2);
    printf("primeiro elemento: %d\n", q.front());
    q.pop();
    printf("segundo elemento: %d\n", q.front());
    q.pop();

    puts("Testando uma stack:");
    stack<int> st;
    st.push(1);
    st.push(2);
    printf("primeiro elemento: %d\n", st.top());
    st.pop();
    printf("segundo elemento: %d\n", st.top());
    st.pop();
}

