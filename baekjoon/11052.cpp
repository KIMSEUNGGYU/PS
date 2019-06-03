#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 1001;
int d[MAX];		// d[n]: N개를 갖기 위해 지불해야하는 금액의 최대값
int p[10001];	// p[i]: i개의 카드를 갖기 위해 지불해야하는 금액

// 식
// d[n] = p[i]+d[n-i];
int main() {
	d[0] = 0;
	int n;
	scanf("%d", &n);

	for(int i=1; i<=n; i++) scanf("%d", &p[i]);

	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			// i개 샀을때 최고 금액
			d[i] = max(d[i], p[j]+d[i-j]);	
		}	

	}
	printf("%d\n", d[n]);

	return 0;
}