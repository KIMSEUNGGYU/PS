#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int time;
	vector<int> v;
	vector<int> vSum;

	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> time;
		v.push_back(time);
	}

	sort(v.begin(), v.end());
	int sum = 0;
	for(auto x: v) {
		sum+=x;
		vSum.push_back(sum);
	}

	sum = 0;
	for(auto x:vSum) sum+=x;
	cout << sum << "\n";

	return 0;
}