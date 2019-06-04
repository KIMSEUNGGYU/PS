// 9613
// 1978

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b;

	cin >> a >> b;
	// a	b   m
	// 24 18 	6
	// 18 6     0 

	// 18 24 	18
	// 24 18 	6
	// 18 6     0
 

	if(a<b) {
		swap(a, b);
	}

	int n=a, m=b;
	int mod;
	int gcd, lcm;

	// 최대공약수 - 유클리드 호제법 
	while(1) {
		mod = n%m;

		if(mod==0) {
			gcd = m;
			break;
		}

		n=m;
		m=mod;
	}

	// 최소공배수
	lcm = (a/gcd) * (b/gcd) * gcd;

	cout << gcd << "\n";
	cout << lcm << "\n";

	return 0;
}