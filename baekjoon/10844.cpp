#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000000;

long long dp[101][10];	// 길이가 n인 계단 수, j는 마지막의 오는 수

int main() {
	int n;
	cin >> n;

	// 길이가 1인 경우에서 나올 수 있는 부분 처리
	dp[1][0] = 0;
	for(int i=1; i<=9; i++) dp[1][i] = 1;

	for(int i=2; i<=n; i++) {
		for(int j=0; j<=9; j++) {
			if(j==0) dp[i][j] = dp[i-1][j+1];
			else if(j==9) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];

			dp[i][j] %= mod;
		}
	}

	long long sum = 0;
	for(int i=0;i<=9; i++) {
		sum += dp[n][i];
	}

	cout << sum%mod << "\n";

	return 0;
}