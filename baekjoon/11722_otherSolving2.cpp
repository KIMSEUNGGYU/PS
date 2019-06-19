#include <bits/stdc++.h>
using namespace std;

int a[1001];	// 수열 값
int dp[1001];	// 감소하는 부분 수열 최대 길이

int main() {	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];

	// 1. 접근을 거꾸로
	for(int i=n-1; i>=0; i--) {
		dp[i] = 1;
		for(int j=n-1; j>=i; j--) {
			// cout << j << " ";
			if(a[i] > a[j] && dp[i] < dp[j]+1) {
				dp[i] = dp[j]+1;
			}
		}
	}
 
	int max = -1;
	for(int i=n-1; i>=0; i--) {
		if(max < dp[i]) max = dp[i];
	}

	cout << max << "\n";
	return 0;
}