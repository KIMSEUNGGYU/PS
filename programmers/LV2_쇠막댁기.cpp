#include <bits/stdc++.h>
using namespace std;

int solution(string arrangement) {
    int cnt = 0;		// �� �踷��� ���� 
    stack<int> st;		
    
    // () ������ 
	// �׷��� ������ ����� 
    for(int i=0; i<arrangement.length(); i++) {
    	// ���������� ��������� ������ �켱 ������� �����ϰ� ó�� 
        if(arrangement[i] == '(') {
            st.push(i);
        }
        else if(arrangement[i] == ')') {
            // ������ - ���� �ֱٿ� (�� ���̰� 1�̶�� ������  
            if(i-1 == st.top()) {
                cnt += st.size()-1;
            }
            // �׷��� ������ �������� �ƴ� 
            else {
                cnt++;
            }
            
            st.pop();
        }
    }
    
    return cnt;
}
