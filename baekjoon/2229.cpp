//10
//2 5 7 1 3 4 8 6 9 3

#include <bits/stdc++.h> 
using namespace std;

int dp[1010];	// i 번 째때 가장 큰 값 

int main() {
	int n;
	cin >> n;
	
	vector<int> arr;
	arr.push_back(0);
	
	for(int i=1; i<=n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}
	
	dp[0] = 0;
	dp[1] = 0;
	for(int i=1; i<=n; i++) {
		int M = -100000000;
		int m = 1000000000;
		for(int j=i; j>0; j--) {
			M = max(M, arr[j]);
			m = min(m, arr[j]);
			
			dp[i] = max(dp[i], M - m + dp[j-1]);
		}
	}

	cout << dp[n] << "\n";
	
	return 0;
}
