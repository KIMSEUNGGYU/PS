#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// 10분, 1분, 10초를 초로 변환
	vector<int> time = {300, 60, 10};
	// 각각을 나눌 값을 저장할 공간
	vector<int> cnt(3);

	int T;
	cin >> T;

	// 10분, 1분, 10초 각각의 경우로 나눌 수있다면 나누고 그 몫(몇번나눴는지)을 cnt에 저장
	for(int i=0; i<time.size(); i++) {
		if(T >= time[i]) {
			cnt[i] = T / time[i];
			T %= time[i];
		}
	}

	// 0이 아니면 나누어 떨어지지 않는 경우
	if(T != 0) {
		cout << "-1\n";
	}
	// 0이면 모두 나누어 떨어진 것이므로, 각각의 경우를 출력
	else {
		for(int i=0; i<cnt.size(); i++) {
			cout << cnt[i] << " ";
		}
		cout << "\n";
	}


	return 0;
}
