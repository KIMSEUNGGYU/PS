#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	string current[51], goal[51];
	
	for(int i=0; i<n; i++) cin >> current[i];
	for(int i=0; i<n; i++) cin >> goal[i];
	int cnt = 0;
	bool same = true;
	// current 와 goal 이 같다면 true
	// 다르면 false

	if(n>=3 && m>=3) {
		for(int i=0; i<=n-3; i++) {
			for(int j=0; j<=m-3; j++) {
				same = true;
				if(current[i][j] != goal[i][j]) {
					// 연산 수행
					for(int k=i; k<i+3; k++) {
						for(int l=j; l<j+3; l++) {
							if(current[k][l] == '0') current[k][l] = '1';
							else current[k][l] = '0';
						}
					}
					cnt++;
				}

				// 1. 같은지 비교
				same = true;
				for(int k=0; k<n; k++) {
					if(current[k] != goal[k]) {
						same = false;	/// 다르면 false
						break;
					}
				}

				// 같은면 나가기
				if(same == true) {
					break;
				}
			}

			if(same == true) break;
		}
	}
	else {
		same = true;
		for(int k=0; k<n; k++) {
			if(current[k] != goal[k]) {
				same = false;	/// 달랐을때 false로 변경
				break;
			}
		}
	}

	if(same == true) cout << cnt << "\n";
	else cout << "-1\n";

	return 0;
}