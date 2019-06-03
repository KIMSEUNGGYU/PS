#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	for(int i=1; i<=20; i++) v.push_back(i);
	
	for(int i=1; i<=10; i++) {
		int from, to;
		cin >> from >> to;
		
		reverse(v.begin()+from-1, v.begin()+to);
	}
	
	for(auto x:v) cout << x << " ";

	return 0;
}
