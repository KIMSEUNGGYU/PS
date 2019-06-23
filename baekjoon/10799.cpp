#include <iostream>
#include <stack>
#include <string> 
using namespace std;

// 연속적인거하고 아닌거하고 어떻게 구분할지가 키!
int main() {
	string s;
	stack<int> st;	// 몇번째 위치에 있는 '(' 인지 
	int cnt = 0; 	// 파이프의 총 갯수 
	getline(cin, s);
	
	for(int i=0; i<s.length(); i++) {
		if(s[i]=='(') {
			// push
			// push 할때 인덱스도 같이 넣어야함
			st.push(i);
		}
		else if(s[i] == ')') {
			// pop
			// 1. 레이저 인지
			// 스택에 남아있는 데이터의 갯수를 cnt에 증가 
			if(i == st.top()+1) {
				st.pop();
				cnt+=st.size();
			}
						
			// 2. 아니면 파이프인지 
			// 파이프라면 하나만 증가
			// 파이프를2등분하면 하나가 남기 때문에  
			else {
				st.pop();
				cnt += 1;
			}
		}
	}
	
	cout << cnt <<"\n";
	
	return 0;
}
