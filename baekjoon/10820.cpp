#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	
	while(getline(cin, s)) {
		int spaceCnt = 0;
		int lowerCnt = 0;
		int upperCnt = 0;
		int numberCnt = 0;

		for(int i=0; i<s.size(); i++) {
			if('0' <= s[i] && s[i] <='9') {
				numberCnt++;
			}
			else if('a' <= s[i] && s[i] <= 'z') {
				lowerCnt++;
			}
			else if('A' <= s[i] && s[i] <= 'Z') {
				upperCnt++;
			} 
			else if(s[i] == ' ') {
				spaceCnt++;
			}
		}
		cout << lowerCnt << " " << upperCnt << " " << numberCnt << " " << spaceCnt << "\n";
	}

	return 0;
}