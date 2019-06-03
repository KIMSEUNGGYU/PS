#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 1001;
int p[10001]; 	// 카드 i개가 담겨있는 카드팩의 가격
int d[MAX]; 	// 카드 N개를 구입하는데 필요한 최소 가격	
// dp 식
// d = min(p[j]+d[i-j]);
int main() {
	int n;
	cin >> n;

	for(int i=1; i<=n; i++) {
		cin >> p[i];
		d[i] = 1000 * 1000;
	}

	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			d[i] = min(d[i], p[j]+d[i-j]);
		}
	}

	printf("%d\n", d[n]);

	return 0;	
}