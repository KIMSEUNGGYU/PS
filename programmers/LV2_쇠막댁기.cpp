#include <bits/stdc++.h>
using namespace std;

int solution(string arrangement) {
    int cnt = 0;		// 총 쇠막대기 갯수 
    stack<int> st;		
    
    // () 레이져 
	// 그렇지 않으면 막대기 
    for(int i=0; i<arrangement.length(); i++) {
    	// 레이져인지 막대기인지 모르지만 우선 막대기라고 생각하고 처리 
        if(arrangement[i] == '(') {
            st.push(i);
        }
        else if(arrangement[i] == ')') {
            // 레이져 - 가장 최근에 (와 차이가 1이라면 레이져  
            if(i-1 == st.top()) {
                cnt += st.size()-1;
            }
            // 그렇지 않으면 레이져가 아님 
            else {
                cnt++;
            }
            
            st.pop();
        }
    }
    
    return cnt;
}
