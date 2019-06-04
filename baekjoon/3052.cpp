#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	vector<int> v;
	vector<int> check(43, 0);

	for(int i=0; i<10; i++) {
		int value;
		cin >>  value;
		v.push_back(value % 42);
	}

	for(auto x : v) {
		check[x]++;
	}
	
	int cnt = 0;
	for(auto x:check) {
		if(x!=0) {
			cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}