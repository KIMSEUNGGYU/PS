#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> numbers;
	for(int i=0; i<n; i++) {
		int x;
		cin >> x;
		numbers.push_back(x);
	}
	
	sort(numbers.begin(), numbers.end(), greater<int>());
	
	for(int i=0; i<numbers.size(); i++) {
		cout << numbers[i] << "\n";
	}
	
	return 0;
} 
