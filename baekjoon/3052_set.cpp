#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	set<int> s;

	// 10개 입력
	for(int i=0; i<10; i++) {
		int value;
		cin >>  value;
		v.push_back(value % 42);
	}

	// sort(v.begin(), v.end());
	// set은 자동정렬됨!

	for(auto x:v) {
		s.insert(x);
	}

	cout << s.size() << " ";
}