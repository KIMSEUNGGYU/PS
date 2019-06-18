/*
- dp 정의
  dp: 카드 i개를 구할 수 있는 최대 가격
  p : 카드 i개를 구할 수 있는 가격
- 식 정의	
  dp[i] = max(dp[i-j]+p[j]);	// 각 경우당 최대값
*/

#include <bits/stdc++.h>
using namespace std;

int p[10001];	// 카드 i개의 가격
int dp[1001];	// 카드 i개를 구할 수 있는 최대 가격

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	for(int i=1; i<=n; i++) cin >> p[i];

	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			if(dp[i] < dp[i-j] + p[j]) dp[i] = dp[i-j] + p[j];
		}
	}

	cout << dp[n] << "\n";

	return 0;
}
