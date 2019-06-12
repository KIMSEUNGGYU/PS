/*
실수 
주어진 범위가 10^6 으로 백만의 공간(dp)이 필요한데 난 10^5의 공간만 줌!
*/
#include <bits/stdc++.h>
using namespace std;

int dp[1000001];	// 1로 만드는 최소 연산 횟수

// Top-down 방식
int go(int n) {
	// 예외
	if(n==1) return 0;

	// memoization: 값이 있으면 연산처리 안함
	if(dp[n] > 0) return dp[n];

	// "-1" 연산
	dp[n] = go(n-1)+1;

	// "/3" 연산
	if(n%3==0) {
		int temp = go(n/3)+1;
		if(dp[n] > temp) dp[n] = temp;
	} 

	// "/2" 연산
	if(n%3==0) {
		int temp = go(n/2)+1;
		if(dp[n] > temp) dp[n] = temp;
	} 

	return dp[n];
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	
	cout << go(n) << "\n";
	
	return 0;
}
 
