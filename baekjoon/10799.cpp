#include <iostream>
#include <stack>
#include <string> 
using namespace std;

// �������ΰ��ϰ� �ƴѰ��ϰ� ��� ���������� Ű!
int main() {
	string s;
	stack<int> st;	// ���° ��ġ�� �ִ� '(' ���� 
	int cnt = 0; 	// �������� �� ���� 
	getline(cin, s);
	
	for(int i=0; i<s.length(); i++) {
		if(s[i]=='(') {
			// push
			// push �Ҷ� �ε����� ���� �־����
			st.push(i);
		}
		else if(s[i] == ')') {
			// pop
			// 1. ������ ����
			// ���ÿ� �����ִ� �������� ������ cnt�� ���� 
			if(i == st.top()+1) {
				st.pop();
				cnt+=st.size();
			}
						
			// 2. �ƴϸ� ���������� 
			// ��������� �ϳ��� ����
			// ��������2����ϸ� �ϳ��� ���� ������  
			else {
				st.pop();
				cnt += 1;
			}
		}
	}
	
	cout << cnt <<"\n";
	
	return 0;
}
