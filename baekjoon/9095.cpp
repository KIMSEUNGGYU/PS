/* 
- dp 정의
  dp[11]: n을 1, 2, 3의 합으로 만들 수 있는 방법의 수

- 식 정의
  dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
*/

#include <bits/stdc++.h>
using namespace std;

int dp[11];		// n을 1, 2, 3의 합으로 만들 수 있는 방법의 수
int main() {
	// dp 구하기
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;

	for(int i=3; i<=11; i++) {
		dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
	}
	
	// 값 입력 및 출력
	int n;
	cin >> n;
	while(n--) {	
		int x;
		cin >> x;
		cout << dp[x] <<"\n";
	}

	return 0;
}
