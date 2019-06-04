/*

1.	연산 +, - 의 경우를 각각 처리 해야함 
	- 수 처리 부분
2.	첫 번째 마이너스 만나기전까지 더하고 
	마이너스를 만나면 따로 더함 
3. 2단계에서 2개의 변수를 더하기, 단. 마이너스를 만났을때 더한 것은 음수로 변경하고 더해야함!
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string temp;
	bool minus = false;
	int result = 0;
	string s;
	cin >> s;

	for(int i=0; i<=s.size(); i++) {
		// 연산자면 처리
		if(s[i] == '+' || s[i] == '-' || s[i] == '\0') {
			if(minus) {
				result -= stoi(temp);
			}
			else {
				result += stoi(temp);
			}

			temp = "";

			if(s[i] == '-') minus = true;
			// continue;	// continue를 한 이유는 연산자를 추가하지 않기 위해
		} else {
			temp += s[i];
		}
	}

	cout << result << "\n";

	return 0;
}