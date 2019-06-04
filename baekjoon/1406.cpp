// https://gist.github.com/Baekjoon/a2028fb9878c7bf82e35

#include <iostream>
#include <list>
// #include <string>
using namespace std;

int main() {
	string s;
	int n;

	cin >> s;
	cin >> n;

	list<char> l(s.begin(), s.end());
	// list<char> l;
	// for(auto c:l) {

	// 	l.push_back(c);
	// }
	
	auto cursor = l.end();

	while(n--) {
		char cmd;
		cin >> cmd;

		if(cmd == 'L') {
			// 커서를 왼쪽으로 한 칸 옮김 (커서가 문장의 맨 앞이면 무시됨)
			if(cursor != l.begin()) {
				--cursor;
			}
		}
		else if(cmd == 'D') {
			// 커서를 오른쪽으로 한 칸 옮김 (커서가 문장의 맨 뒤이면 무시됨)
			if(cursor != l.end()) {
				++cursor;
			}
		}
		else if(cmd == 'B') {
			// 커서 왼쪽에 있는 문자를 삭제함 (커서가 문장의 맨 앞이면 무시됨)
			// 삭제로 인해 커서는 한 칸 왼쪽으로 이동한 것처럼 나타나지만, 실제로 커서의 오른쪽에 있던 문자는 그대로임
			if(cursor != l.begin()) {
				auto temp = cursor;
				--cursor;
				l.erase(cursor);
				cursor = temp;
				// --temp;	
				// l.erase(cursor);
				// cursor = temp;
			}
		}
		else if(cmd == 'P') {
			// $라는 문자를 커서 왼쪽에 추가함
			char c;
			cin >> c;

			l.insert(cursor, c);
		}
	}

	
	for(auto c:l) {
		cout << c;
	}
	cout << "\n";


	return 0;
}

