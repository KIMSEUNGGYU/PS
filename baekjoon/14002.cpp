#include <bits/stdc++.h>
using namespace std;

int a[1001];	// 수열
int dp[1001];	// 가장 긴 부분 수열
int v[1001];	// 값이 변동되는 위치?를 기록

// 가장 긴 부분 수열 값 출력
void go(int p) {
	if(p==-1) return;
	go(v[p]);
	cout << a[p] << " ";
}


int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i];
	
	// 가장 긴 증가하는 부분 수열 찾음
	for(int i=0; i<n; i++) {
		dp[i] = 1;
		v[i] = -1;
		for(int j=0; j<i; j++) {
			if(a[j] < a[i] && dp[i] < dp[j]+1) {
				dp[i] = dp[j]+1;
				v[i] = j;
			}
		}
	}

	// 가장 긴 부분 수열 값 찾기
	int max = -1;
	int idx = -1;
	for(int i=0; i<n; i++) {
		if(max < dp[i]) {
			max = dp[i];
			idx = i;
		}
	}

	// 출력
	cout << max << "\n";
	go(idx);

}