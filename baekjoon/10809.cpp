#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	for(int i=0; i<=25; i++) {
		auto it = find(s.begin(), s.end(), char(97+i));

		if(it==s.end()) {
			cout << "-1 ";
		}
		else {
			cout << it-s.begin() << " ";
		}
	}
	
	return 0;
}
