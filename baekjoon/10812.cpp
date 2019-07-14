#include <bits/stdc++.h>
using namespace std;
const int MAX = 110;

int main() {	
	int n, m;
	vector<int> basket;
	cin >> n >> m;

	for(int a=1; a<=n; a++) {
		basket.push_back(a);
	}

	for(int a=0; a<m; a++) {
		int i, j, k;
		cin >> i >> j >> k;

		rotate(basket.begin()+i-1, basket.begin()+k-1, basket.begin()+j);
	}

	for(auto x:basket) {
		cout << x << " ";
	}

	return 0;
}
