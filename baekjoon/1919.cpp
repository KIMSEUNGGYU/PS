/*
1. 문자열 2개를 입력받는다. 
2. 각 문자열당 알파벳 갯수를 파악한다.
3. 'a' 부터 'z' 를 돌면서 갯수가 다르면 같게 맞춘다.
단, 이때는 큰수에서 작은수를 맞쳐야한다. 

*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	string s1, s2;	
	map<int, int> m1, m2;
	int cnt = 0;
	cin >> s1 >> s2;
	
	for(auto x:s1) {
		m1[x-'a']++;
	}
	
	for(auto x:s2) {
		m2[x-'a']++;
	}
	
	for(int i='a'; i<='z'; i++) {
		if(m1[i-'a'] != m2[i-'a']) {
			if(m1[i-'a']>m2[i-'a']) {
				while(m1[i-'a']!=m2[i-'a']) {
					cnt++;
					m1[i-'a']--;	
				}
			}
			else {
				while(m1[i-'a']!=m2[i-'a']) {
					cnt++;
					m2[i-'a']--;	
				}
			}
		}
	}
	
	cout << cnt << "\n";
	
	
	return 0;
}
