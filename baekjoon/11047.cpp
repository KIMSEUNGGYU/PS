#include <iostream>
#include <vector>
using namespace std;

/*
주의 사항 
- 범위를 찾았다면 /와 %로 한번에 처리 가능 
- 주어진 숫자가 1인 경우, 내가 구사한 로직은 i, i-1로 접근하기 때문에 따로 처리
*/
int main() {
	int N, k;
	vector<int> v;	// 동전의 가치를 저장하는 곳
	cin >> N >> k;	
	int cnt = 0; 	// 몇번만에 만족 시켰는지
	
	for(int i=0; i<N; i++) {
		int value;
		cin >> value;
		v.push_back(value);
	}

	// k가 0이면 종료
	// 가치 중에서 최적화된 값들만큼 빼야함 - 즉, 기준 인덱스를 골라야함!
	// 기준 인덱스 고르는 방법 i(내림차순)를 기준으로 i는 안되고 i-1이 되면 i-1이 기준
	// 기준 인덱스를 찾았다면 기준 인덱스의 값만큼 빼고 다시 반복문 수행
	
	// N이 1인 경우, 주어진 수가 하나만 있는 경우
	if(N==1) cnt += k/v[0];
	else {
		// 주어진 동전의 크기가 k보다 작은 경우를 처리 하지 않음.. 그래서 무한루프
		while(k != 0) {
			for(int i=N-1; i>=1; i--) {
				if(v[N-1] < k) {
					cnt += k/v[N-1];
					k %= v[N-1];
				}
				if(v[i] > k  &&  v[i-1] <= k) {
					cnt += k/v[i-1];
					k %= v[i-1];
				}
			}
		}
	}
	
	cout << cnt << "\n";
	return 0;

}