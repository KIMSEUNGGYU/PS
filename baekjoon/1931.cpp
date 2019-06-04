/*
time 벡터를 만들어서 모두 0으로 초기화
해당 값이 1로 되어 있으면 그 시간에 회의실을 이용중 또는 이용함
0이면 이용할 수 있음

pair로 입력받고, 그 범위 안에 time 벡터 값이 모두 0이면 cnt를 증가시키고 
해당 time의 범위만큼 1로 모두 변경
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	pair<int, int> p;
	bool flag = true;
	int cnt = 0;
	int N;
	cin >> N;

	vector<long long> time(N+1, 0);
	while(N--) {
		int from, to;
		cin >> from >> to;

		flag = true;
		for(int i=from; i<=to; i++) {
			if(time[i]==1) {
				flag = false;
				break;
			}
		}

		if(flag == true) {
			for(int i=from; i<=to; i++) time[i] =1;
			cnt++;
		}

	}

	cout << cnt << "\n";

	return 0;
}









/*
실수(생각지 못한 부분)
- 난 입력 받은 순서대로 처리했는데 만약 첫번째 주어진 숫자가 모든 처음부터 끝까지라면 
단 한번만 작동한다. 해당 부분은 최대로 구할 수 있는 방법을 물어보기 때문에 입력받은 순서대로 하면 안됨

*/
