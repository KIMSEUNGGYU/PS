#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> v;
	scanf("%d", &n);

	for(int i=0; i<n; i++) {
		int x;
		scanf("%d", &x);
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	for(auto x:v) printf("%d\n", x);

	return 0;
}