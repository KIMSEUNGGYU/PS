#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<int> st;
	int n;
	cin >> n;
	
	string cmd;
	while(n--) {
		cin >> cmd;
		
		if(cmd == "push") {
			int x;
			cin >> x;
			st.push(x);
		}
		else if(cmd =="pop") {
			if(st.empty()) {
				cout << "-1\n";
			} 
			else {
				cout << st.top() <<"\n";
				st.pop();
			}
		}
		else if(cmd =="size") {
			cout << st.size() << "\n";
		}
		else if(cmd =="empty") {
			if(st.empty()) {
				cout << "1\n";
			} else {
				cout << "0\n";
			}
		}
		else if(cmd =="top") {
				if(st.empty()) {
				cout << "-1\n";
			} else {
				cout << st.top() << "\n";
			}
		}
	}
	
	return 0;
}
