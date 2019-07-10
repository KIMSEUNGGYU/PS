#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// 입력 
	int N, K;
	cin >> N >> K;
	
	vector<int> coin(N);
	for(int i=0; i<N; i++) cin >> coin[i];
	
	// 필요한 코인 갯수 처리 
	int cnt = 0;
	for(int i=N-1; i>=0; i--) {
		cnt += K/coin[i];
		K %= coin[i];
	}
	
	cout << cnt << "\n";
	
	return 0;
}ㅋ 
