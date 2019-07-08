#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    stack<int> st;
    
    // 오른쪽 부터 왼쪽으로 돌면서 송신 - 수신이 가능한지 확인
    for(int i=heights.size()-1; i>=0; i--) {
        bool flag = false;      // 값이 추가 되면 true
        for(int j=i; j>=0; j--) {
            if(heights[i] < heights[j]) {
                st.push(j+1);
                flag = true;
                break;
            }
        }
        
        if(flag == false) st.push(0);
    }
    
    // 스택에 송수신 값들을 저장해서 answr 배열에 추가
    // 사실 이렇게 굳이 안해도됨, 어떻게 스택을 고민하다가 사용, (스택 사용 방법 아님)
    while(!st.empty()) {
        answer.push_back(st.top());
        st.pop();
    }
    return answer;
}