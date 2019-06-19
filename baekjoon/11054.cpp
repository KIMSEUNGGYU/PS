#include <bits/stdc++.h>
using namespace std;

int a[1001];	// 수열 값
int dp1[1001];	// 가장 긴 증가하는 부분 수열 길이
int dp2[1002];	// 가장 긴 감소하는 부분 수열 길이

int main() {
	ios::sync_with_stdio(0);
	cin.tie();

	int n;
	cin >> n;
	for(int i=1; i<=n; i++) cin >> a[i];

	// 가장 긴 증가하는 부분 수열 구하기
	for(int i=1; i<=n; i++) {
		dp1[i] = 1;

		// 가장 긴 증가하는 수열
		for(int j=1; j<=i; j++) {
			if(a[i] > a[j] && dp1[i] < dp1[j]+1) dp1[i] = dp1[j]+1;
		}
	}


	// 가장 긴 감소하는 부분 수열 구하기
	for(int i=n; i>=1; i--) {
		dp2[i] = 1;

		// 가장 긴 감소하는 부분 수열
		for(int j=i; j<=n; j++) {
			if(a[i] > a[j] && dp2[i] < dp2[j]+1) dp2[i] = dp2[j]+1;
		}
	}

	int max = -1;
	for(int i=1; i<=n; i++) {
		if(max < dp1[i]+dp2[i]-1) max = dp1[i]+dp2[i]-1;
	}
	cout << max << "\n";

	return 0;
}