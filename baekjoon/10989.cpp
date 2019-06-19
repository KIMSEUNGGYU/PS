#include <bits/stdc++.h>
using namespace std;

int main() {
	// 입력 효율적 처리 부분 없으면 시간 초과 나옴 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int numbers[10001] = {0, };
	int number;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> number;
		numbers[number]++;
	}
	
	for(int i=1; i<10001; i++) {
		for(int j=0; j<numbers[i]; j++) {
			cout << i << "\n";
		}
	}
	
	return 0;
}
