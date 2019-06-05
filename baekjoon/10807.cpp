#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;		// 입렬 수
	int v;		// v가 몇개있는지
	int cnt = 0;	// 같은 값 갯수 변수
	scanf("%d", &N);
	vector<int> vec;
	
	// 배열 입력
	for(int i=0; i<N; i++) {
		int x;
		scanf("%d", &x);
		vec.push_back(x);
	}
	// 찾고자 하는 값 입력
	scanf("%d", &v);
	
	// 같은 값이 있으면 cnt 증가
	for(auto x:vec) {
		if(x==v) cnt++;
	}
	// 출력
	cout << cnt << "\n";
	return 0;
}