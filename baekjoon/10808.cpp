#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string s;
	vector<int> v(26, 0);
	cin >> s;
	
	for(int i=0; i<s.length(); i++) {
		v[s[i]-'a']++;
	}
	
	for(auto x:v) {
		cout << x << " ";
	}
	cout << "\n";
	return 0;
}
