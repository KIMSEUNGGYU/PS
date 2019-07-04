// 1021 백준 
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// 입력 
	int n, m;
	cin >> n >> m;

	int cnt = 0;	// 연산 1를 한 것!
	int answer = 0;	// 정답  
	deque<int> dq;

	for(int i=1; i<=n; i++) {
		dq.push_back(i);
	}

	vector<int> arr;
	for(int i=0; i<m; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}

	//	for(int i=0; i<dq.size(); i++) cout << dq[i] << " ";
	//	cout << "\n";
	//	for(int i=0; i<arr.size(); i++) cout << arr[i] << " ";

	int arrIdx = 0;
	while(1) {
		if(cnt == m) break;

		// 1 연산 수행해야할때 
		if(arr[arrIdx] == dq.front()) {
			arrIdx++;
			dq.pop_front();
			cnt++;
			// for(int i=0; i<dq.size(); i++) cout << dq[i] << " ";
			// cout <<"\n";
		}
		else {
		int idxCnt = 0;

		// 일치하는 공간 찾기 
		for(int i=0; i<dq.size(); i++) {
			if(dq[i] == arr[arrIdx]) {
				idxCnt = i;
				break;
			}
		}

		int ban = dq.size() / 2;

		// 3연산 수행 - 오른쪽으로 한 칸 이동시킨다
		if(ban < idxCnt) {
			for(int i=0; i<dq.size() - idxCnt; i++) {
				int x = dq.back();
				dq.pop_back();
				dq.push_front(x);
				answer++; 
			}
		}
		// 2연산 수행
		else {
			for(int i=0; i<idxCnt; i++) {
				int x = dq.front();
				dq.pop_front();
				dq.push_back(x);
				answer++;
				}
			} 
		}
	}

	cout << answer << "\n";
	return 0;
}
