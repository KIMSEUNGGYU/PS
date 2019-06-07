#include <iostream>
#include <string>
#include <list> 
// '-' : 백스페이스
// '<' : 왼쪽 화살표
// '>' : 오른쪽  화살 
using namespace std;

int main() {
	int t;
	string l;
	list<char> li;
	cin >> t;
	
	while(t--) {
		cin >> l;
		li.clear();
		auto cursor = li.end();	
		// 실수, 해당 부분을 while문 밖에 선언해서 런타임에러 

		for(auto x:l) {
			// 왼쪽 이동 
			if(x=='<') {
				if(cursor != li.begin()) --cursor;	
			}
			// 오른쪽 이동 
			else if(x=='>') {
				if(cursor != li.end()) ++cursor;
			}
			// 글 삭제 
			else if(x=='-') {
				if(cursor != li.begin()) {
					auto temp = cursor;
					--cursor;
					li.erase(cursor);
					cursor = temp;
				}
			}
			// 비밀번호 입력한거! 
			else {
				li.insert(cursor, x);
			}
		}
		
		for(auto x:li) {
			cout << x;
		}
		cout <<"\n";
	}
	
	return 0;
}
