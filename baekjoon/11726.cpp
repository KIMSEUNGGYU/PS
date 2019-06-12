#include<bits/stdc++.h>
using namespace std;

// 문제
int dp[1001]; 	// 2*n 직사각형을 채우는 타일의 수

// 작은 문제
// dp[n-1];	// 2*1 타일
// dp[n-2]; // 1*2 타일

// 식 정의
// dp[i] = dp[i-2]+dp[i-1]

int main() {
	int n;
	cin >> n;

	// 예외 처리?
	dp[0] = 1;
	dp[1] = 1;

	// Bottom-up 방식
	for(int i=2; i<=n; i++) {
		dp[i] = (dp[i-2]+dp[i-1]) % 10007;
	}

	cout << dp[n] << "\n";

	return 0;
}
