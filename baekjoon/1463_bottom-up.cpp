#include <bits/stdc++.h>
using namespace std;
int dp[1000001];		// 1로 만드는 최소 연산 횟수

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;

	// 예외 처리
	dp[1] = 0;

	// bottom-up 방식
	for(int i=2; i<=n; i++) {
		// "-1" 연산
		dp[i] = dp[i-1]+1;

		// "/2" 연산
		if(i%2==0 && dp[i]>dp[i/2]+1) dp[i] = dp[i/2]+1;

		// "/3" 연산
		if(i%3==0 && dp[i]>dp[i/3]+1) dp[i] = dp[i/3]+1;
	}

	cout << dp[n] << "\n";
}
