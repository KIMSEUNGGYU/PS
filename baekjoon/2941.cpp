#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string inp;
	cin >> inp;
	
	vector<string> correct = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	
	// 문자열을 돌면서  
	for(int k=0; k<inp.length(); k++) {
		
		// 비교하는 문자와 비교한다.  
		for(int i=0; i<correct.size(); i++) {
			int size = correct[i].length();
			
			// 만약 문자열과 비교하는 문자열이 같은 경우
			// replace 를 이용해 * (한글자)로 변환한다. 
			if(inp.substr(k, size) == correct[i].substr(0, size)) {
				inp.replace(k, size, "*");
			}
		}
	}
	
	// 비교하는 문자가 2글자 또는 3글자이고 
	// 비교하는 문자가 없는 경우에는 한글자만 대체한다.
	// 하지만 비교하는 문자가 없는 경우에는 그냥 원본 문자이고 비교하는 문자와 일치하면 한글자로 만들었기 때문에 
	// 문자열의 길이를 출력하면 된다. 
	cout << inp.length() << "\n";
	
	return 0;
}
