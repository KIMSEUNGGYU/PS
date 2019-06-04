#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v;

	int su;
	while(n--) {
		cin >> su;
		v.push_back(su);
	}

	cout << *min_element(v.begin(), v.end()) << " ";
	cout << *max_element(v.begin(), v.end()) << "\n";

	return 0;
}