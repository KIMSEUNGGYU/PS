/*
- dp 정의
  dp[i]: i를 1, 2, 3 의 합으로 나타낼 수 있는 방법의 수. 단, 1000000009 으로 나눈 값
- 식 정의
  dp[i] = dp[i-1]+dp[i-2]+dp[i-3]
*/

#include <bits/stdc++.h>
using namespace std;

unsigned int dp[1000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;

	for(int i=3; i<=1000000; i++) {
		dp[i] = (dp[i-1]+dp[i-2]+dp[i-3]) % 1000000009;
	}

	int n;
	cin >> n;

	while(n--) {
		int x;
		cin >> x;
		cout << dp[x] << "\n";
	}

	return 0;
}
