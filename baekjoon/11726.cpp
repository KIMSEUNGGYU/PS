#include <iostream>
using namespace std;
const int MAX = 1001;
int d[MAX];	// d[n]: n크기의 직사각형을 채우는 방법의 수

// Top-down 방식
int go(int n) {
	// 예외 처리?
	if(n <= 1) return 1;

	// memoization
	if(d[n] > 0) return d[n];

	// 값 쓰기
	d[n] = (go(n-1)+go(n-2)) %10007;
	
	return d[n];
}


int main() {
	int n;
	scanf("%d", &n);

	d[0] = 1;
	d[1] = 1;
	// Bottom-up
	for(int i=2; i<=n; i++) {
		d[i] = d[i-1] + d[i-2];
		d[i] %= 10007;
	}

	printf("%d\n", d[n]);

	return 0;
}