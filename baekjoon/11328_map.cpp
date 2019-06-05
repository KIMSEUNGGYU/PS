/*
방법 2개 
1. 정렬해서 하기 
2. 각 알파벳 갯수가 같은지
*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	map<int, int> m1, m2;
	bool flag;
	int n;
	cin >> n;	

	for(int i=0; i<n; i++) {
		flag = false;
		cin >> s1 >> s2;

		for(int j=0; j<s1.length(); j++) {
			m1[s1[j]-'a']++;
		}

		for(int j=0; j<s2.length(); j++) {
			m2[s2[j]-'a']++;
		}

		for(int j='a'; j<='z'; j++) {
			if(m1[j-'a']!=m2[j-'a']) flag = true;
		}	

		m1.clear();
		m2.clear();

		flag?cout << "Impossible\n":cout<<"Possible\n";
	}

	return 0;
}