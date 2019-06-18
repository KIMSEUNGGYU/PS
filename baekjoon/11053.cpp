#include <bits/stdc++.h>
using namespace std;

int a[1001];	// 수열의 값
int dp[1001];	// i번째 수열에서 가장 긴 부분 수열 길이
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];

	// 가장 긴 부분 수열 구하기
	for(int i=0; i<n; i++) {
		dp[i] = 1;	// 모든 수는 자기 자신을 수열로 만들 수있기 때문에 1

		for(int j=0; j<i; j++) {
			// 조건 
			// 1. 숫자가 커야함 a[j] < a[i] -> 20 < 30
			// 2. dp에는 부분 수열 중 가장 큰 값이 들어있기 때문에 이전 dp값들을 참조하면서 가장 긴 부분 수열 찾기 
			// +1를 한 이유는 자기 자신도 수이기 때문에 조건1을 만족하면 증가하는 부분 수열이 되기 때문에
			if(a[j] < a[i] && dp[i] < dp[j]+1) {
				dp[i] = dp[j]+1;
			}
		}
	}

	// dp 중에서 가장 큰 값 구하기 
	// 해당 값이 가장 긴 부분 수열이기 때문에
	int max = -1;
	for(int i=0; i<n; i++) {
		if(max < dp[i]) max = dp[i];
	}

	cout << max << "\n";

	return 0;
}
