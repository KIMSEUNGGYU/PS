#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	string a, b, c;
	map<string, int> m = {{"black", 0}, {"brown", 1}, {"red", 2}, {"orange", 3},
		{"yellow", 4}, {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8},{"white", 9}};
	
	cin >> a >> b >> c;

	long long answer = (long long)(m[a]*10 + m[b]);
	
	for(int i=0; i<m[c]; i++) {
		answer *= 10;
	}

	cout << answer << "\n";

	return 0;
}
 
