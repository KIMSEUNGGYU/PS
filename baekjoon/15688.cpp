#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	vector<int> v;
	cin >> n;
	
	while(n--) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	
	sort(v.begin(), v.end());
	
	for(auto x:v) {
		cout << x << "\n";
	}
	
	return 0;
}
