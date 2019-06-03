#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v;
	int sum = 0;
	int mid =0;
	
	for(int i=0; i<5; i++) {
		int x;
		cin >> x;
		sum +=x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	
	cout << sum/5 <<"\n" << v[2] << "\n";
	 
	return 0;
}
