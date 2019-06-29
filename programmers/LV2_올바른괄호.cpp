#include <bits/stdc++.h>
using namespace std;

bool solution(string s) {
    stack<char> st;
    
    for(int i=0;i<s.length(); i++) {
        if(s[i] == '(') st.push(1);
        else if(s[i] == ')') {
            if(st.empty()) return false;
            st.pop();
        }
    }
    
    if(st.empty()) return true;
    else return false;
}