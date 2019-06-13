#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	map<char, int> m;
	
	// 모두 대문자로 변경
	transform(s.begin(), s.end(), s.begin(), ::toupper);

	// 알파벳 갯수 찾기
	for(char c:s) {
		m[c]++;
	}

	// 제일 큰 값 찾기
	int max = -1;
	for(char i='A'; i<='Z'; i++) {
		if(max < m[i]) max = m[i];
	}

	// 제일 큰 값이 여러개인지 아닌지 찾기
	int cnt = 0;
	for(char i='A'; i<='Z'; i++) {
		if(max == m[i]) cnt++;
	}

	// 제일 큰 값이 여러개라면 ? 출력, 그렇지 않으면 해당 값 출력
	if(cnt >= 2) cout << "?\n";
	else {
		for(char i='A'; i<='Z'; i++) {
			if(max == m[i]) {
				cout << i;
			}
		}
	}	
	cout <<"\n";


	return 0;
}