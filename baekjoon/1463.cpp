/*
실수 
주어진 범위가 10^6 으로 백만의 공간(dp)이 필요한데 난 10^5의 공간만 줌!
*/
#include <iostream>
using namespace std;

int d[100010];

// Top-down 방식
int go(int n) {
	// 예외 처리
	if(n==1) return 0;

	// 값 읽기?, memoization 했다면 처리
	if(d[n] > 0) return d[n];

	// 1로 만들기 연산 수행
	// -1 연산
	d[n] = go(n-1)+1;

	// /2 연산
	if(n%2==0) {
		int temp = go(n/2)+1;
		if(d[n] > temp) d[n] = temp;
	}

	if(n%3 ==0) {
		int temp = go(n/3)+1;
		if(d[n] > temp) d[n] = temp;
	}

	return d[n];
}

int main() {
	int n;
	scanf("%d", &n);
	
	// printf("%d\n", go(n));

	// Bottom-up 방식
	d[1] = 0;
	for(int i=2; i<=n; i++) {
		d[i] = d[i-1]+1;

		if(i%2==0 && d[i] > d[i/2]+1) {
			d[i] = d[i/2]+1;
		}

		if(i%3==0 && d[i] > d[i/3]+1) {
			d[i] = d[i/3]+1;
		}
	}

	cout << d[n] << "\n";

	return 0;
}


