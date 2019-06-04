#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	vector<int> v;
	cin >> N;

	// 입력
	for(int i=0; i<N; i++) {
		int value;
		cin >> value;
		v.push_back(value);
	}

	// 정렬
	sort(v.begin(), v.end());

	// 출력
	for(auto x:v) cout << x << "\n";

	return 0;
}