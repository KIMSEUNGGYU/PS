// LIS (최장증가수열), DP

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int A[1010] = {0, };	// 인덱스 값
	int d[1010] = {0, };	// 증가 수열의 길이
	
	int n;
	cin >> n;

	// 입력
	for(int i=0; i<n; i++) cin >> A[i];
	int max = 0;
	for(int i=0; i<n; i++) {
		d[i] = 1;	// 각 경우당 증가 수열의 길이는 1, 왜냐하면 자기 자신을 포함하니깐!!
		
		// i-1 값들과 비교 (0, 1, ... , i-1)
		for(int j=0; j<i; j++) {
			// i값이 크고(수열이 증가하고),
			// 이전 증가수열의 길이+1(i값이 크다면 증가수열이고 그렇다면 증가된 상태이니깐 +1)이 더 크면 증가수열의길이 업데이트
			if(A[i] > A[j] && d[i] < d[j]+1) {
				d[i] = d[j]+1;
			}
		}

		// 길이가 가장 큰 것을 기억해두는 용도
		if(max < d[i]) max = d[i];
		
	}

	cout << max <<"\n";
	return 0;
}