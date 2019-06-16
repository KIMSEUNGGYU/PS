
/*
수를 섞어서 나올 수 있는 모든 경우를 구한다.
그 숫자들이 30으로 나누어 떨어지는지 확인한다.
- 30의 배수 특징, 각 자리의 수 합이 3의 배수이고, 마지막 자리가 0인 수 
나누어 떨어지면 max 보다 큰지 비교하여 크다면 대입한다.
모든 경우를 다했을때 max 의 값이 한번이라도 대입됐다면 해당 값을 출력하고 
그렇지 않다면 -1 를 출력한다.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {	
	int sum = 0;		// 각 자리수들의 합, 이 합이 3으로 나누어 떨어지는지 확인!
	bool flag = false;	// 0이라는 숫자가 있다면 true;
	string s;
	cin >> s;			

	for(auto x:s) {
		if(x=='0') flag = true;
		sum += x-'0';
	}	

	if(sum % 3 == 0 && flag == true) {
		sort(s.rbegin(), s.rend());
		cout << s << "\n";
	} 
	else {
		cout << "-1\n";
	}

	return 0;
}
