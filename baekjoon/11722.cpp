#include <bits/stdc++.h>
using namespace std;

int dp[1001];		// 가장 긴 감소하는 부분 수열
int a[1001];		// 수열 값, 단, 처리하기 쉽게 하기 위해 - 붙임
int main() {
	int n;
	cin >> n;	
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++) a[i] *= -1;

	// 가장 긴 증가하는 부분 수열 찾기, 이때 값 저장을 음수로 했기 때문에 결국에는 가장 긴 감소하는 부분 수열이 나옴
	for(int i=0; i<n; i++) {
		dp[i] = 1;
		for(int j=0; j<i; j++) {
			if(a[j] < a[i] && dp[i] < dp[j]+1) {
				dp[i] = dp[j]+1;
			}
		}
	}

	// 가장 긴 감소하는 부분 수열 최대 값 찾기
	int max = -1;
	for(int i=0; i<n; i++) {
		if(max < dp[i]) max = dp[i];
	}

	cout << max << "\n";

	return 0;
}