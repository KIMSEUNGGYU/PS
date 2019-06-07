/*
1. ���ڿ� 2���� �Է¹޴´�. 
2. �� ���ڿ��� ���ĺ� ������ �ľ��Ѵ�.
3. 'a' ���� 'z' �� ���鼭 ������ �ٸ��� ���� �����.
��, �̶��� ū������ �������� ���ľ��Ѵ�. 

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
