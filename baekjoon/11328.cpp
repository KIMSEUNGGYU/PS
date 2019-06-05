/*
방법 2개 
1. 정렬해서 하기 
2. 각 알파벳 갯수가 같은지
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	int n;
	bool flag = false;
	// 같지 않으면 true;
	
	cin >> n;

	for(int i=0; i<n; i++) {
		flag = false;
		cin >> s1 >> s2;

		// 정렬
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());

		// 다른지 비교
		for(int j=0; j<s2.length(); j++) {
			if(s1[j] != s2[j]) {
				flag = true;
				break;
			}
		}

		flag?cout << "Impossible\n":cout<<"Possible\n";
	}

	return 0;
}