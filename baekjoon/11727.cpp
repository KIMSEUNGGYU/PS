/*	실수
1.  문제에서 2x1, 2x2 만 주어져서 이 두개가지의 경우만 생각했는데, 
	2x1를 회전하면 1x2가 되므로 
	2x1, 2x2, 1x2 의 경우까지 모두 고려해야함!
2.  나머지 10007 로 계산해야하는데.. 
	문제를 제대로 읽자!
*/

/*
dp[i]: 2xi 를 채우는 방법의 수

식정의:
dp[i] = dp[i-1]+dp[i-2]*2

dp[i-2]*2 를 하는 이유는 2x2경우와 2x1 경우가 존재하기 때문에

*/
#include <bits/stdc++.h>
using namespace std;

int dp[1001];		//	2xn 을 채우는 방법의 수
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;	
	cin >> n;

	// 예외 처리
	dp[0] = 1;
	dp[1] = 1;

	for(int i=2; i<=n; i++) {
		dp[i] = (dp[i-1]+dp[i-2]*2) % 10007;
	}

	cout << dp[n] <<"\n";
	return 0;
}
