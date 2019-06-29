#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<bool> check(1001, 1); 	// 1 이면 소수
	check[1] = 0;

	// 에라토스테네스의 체 수행
	for(int i=2; i<=1000; i++) {
		if(check[i] == 1) {
			for(int j=i*2; j<=1000; j+=i) {
				check[j] = 0;
			}
		}
	}

	int n;
	cin >> n;
	
	int cnt = 0;	// 소수 갯수

	// 입력 중에 소수 몇개인지 찾기
	for(int i=0; i<n; i++) {
		int number;
		cin >> number;
		if(check[number] == 1) cnt++;
	}

	// 소수 갯수 출력
	cout << cnt << "\n";
		
	return 0;
}