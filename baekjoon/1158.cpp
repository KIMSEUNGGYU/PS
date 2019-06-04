/*
실수 
while 문 조건을 != 이것이 아닌 == 이것으로 함
로직은 != 이렇게 생각했는데 구현을 == 이것으로 
*/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int n, k;
	queue<int> q;	// FIFO 구조로 삽입/삭제하면 편리해서 queue 사용
	cin >> n >> k;

	// 값 셋팅
	for(int i=1; i<=n; i++) {
		q.push(i);
	}

	int idx=1;		// 몇번째 위치를 가리키는지 확인하는 변수

	// q의 값이 하나만 있을때까지 반복
	// q의 값이 하나만 있으면 해당 값이 마지막에 들어가기 때문
	while(q.size() != 1) {
		if(idx == k) {
			v.push_back(q.front());
			q.pop();
			idx = 1;
		}
		q.push(q.front());
		q.pop();
		idx++;
	}

	v.push_back(q.front());
	
	// 출력 부분
	cout << "<";
	for(int i=0; i<v.size()-1; i++) {
		cout << v[i] << ", ";
	}
	cout << v[v.size()-1] << ">";
	
	return 0;
}