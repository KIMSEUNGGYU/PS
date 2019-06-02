#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int n;
	
	cin >> n;
	for(int i=0; i<n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	
	int m = *max_element(v.begin(), v.begin()+n);
	int sum = 0;
	cout << m << "\n";
	for(int i=0; i<n; i++) {
		cout << v[i]/m*100 << " ";
//		sum += v[i] + (v[i]/m) * 100/;
	}
	
//	cout << sum/n <<"\n";
	
	return 0;
}
