#include <bits/stdc++.h>
using namespace std;

int dp[1001]; 	// 가장 큰 증가하는 부분 수열
int a[1001];	// 수열 값

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];

	// 가장 큰 증가 부분 수열 구하기
	for(int i=0; i<n; i++) {
		dp[i] = a[i];

		for(int j=0; j<i; j++) {
			if(a[j] < a[i] && dp[i] < dp[j]+a[i]) {
				dp[i] = dp[j]+a[i];
			}
		}
	}

	// 가장 큰 값 찾기
	int max = -1;
	for(int i=0; i<n; i++) {
		if(max < dp[i]) {
			max = dp[i];
		}
	}

	// 출력
	cout << max << "\n";

	return 0;
}