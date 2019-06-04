#include <iostream>
#include <list>
using namespace std;

int main() {
	int n;		// 풍선의 갯수(n)를 받을 변수
	int x;		// list의 원소를 받을 변수
	list<pair<int, int>> l;

	cin >> n;

	for(int i=1; i<=n; i++) {
		cin >> x;
		l.push_back({i, x});
	}
	auto it = l.begin();

	// ?????? 왜 n-1? 만큼하나?
	// 원소 하나 남겨놓고 다 돌리면 마지막에 그 원소를 출력하면 됨
	for(int i=0; i<n-1; i++) {
		cout << it->first << " ";

		int step = it->second;

		if(step > 0) {
			auto temp = it;
			// 해당 it 가 마지막원소를 가리키고 있으면 첫번째원소를 가리키도록 변경
			++temp;
			if(temp == l.end()) {
				temp = l.begin();
			}

			l.erase(it);

			it = temp;
			// step 수 만큼 증가
			for(int i=1; i<step; i++) {
				// i를 1부터한 이유는 temp로 이미 한칸을 움직였기 때문에 한칸은 이미 증가한상태로 판단
				++it;

				if(it == l.end()) {
					it = l.begin();
				}
			}
		}
		else if(step < 0) {
			step = -step;	// 양수로 변환

			auto temp = it;
			// it가 첫번째 원소를 가리키고있으면 마지막원소를 가리키게함, 여기서 -1 된거 아님?
			if(temp==l.begin()) {
				temp = l.end();	// end가 리스트의 +1를 가리키고 있으니깐
			}
			--temp;

			// 삭제
			l.erase(it);
			
			it = temp;
			for(int i=1; i<step; i++) {
				if(it==l.begin()) {
					it=l.end();
				}
				--it;
			}
		}
	}

	cout << l.front().first << "\n";


	return 0;
}