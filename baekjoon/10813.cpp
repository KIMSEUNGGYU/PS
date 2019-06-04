#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	vector<int> basket;
	cin >> n >> m;

	for(int i=1; i<=n; i++) {
		basket.push_back(i);
	}

	for(int i=0; i<m; i++) {
		int a, b;
		cin >> a >> b;

		swap(*(basket.begin()+a-1), *(basket.begin()+b-1));
	}

	for(auto x:basket) {
		cout << x << " ";
	}

	return 0;
}