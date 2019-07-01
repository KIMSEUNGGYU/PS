#include <bits/stdc++.h>
using namespace std;
const int MAX = 9999999;
vector<bool> eratos(MAX, true); // true면 소수

void eratos_exe() {
    eratos[0] = 0;
	eratos[1] = 0;	// 0과 1은 소수가 아님

	for(int i=2; i<=MAX; i++) {
		for(int j=i*2; j<=MAX; j+=i) {
			eratos[j] = false;
		}
	}
}


int solution(string numbers) {
    eratos_exe();
    
    int cnt = 0;
	map<int, int> base;

	for(int i=0; i<numbers.length(); i++) {
		base[numbers[i] - '0']++;
	}

	sort(numbers.begin(), numbers.end(), greater<char>());
	int max = stoi(numbers);
	
	for(int i=2; i<=max; i++) {
		string s = to_string(i);

		map<int, int> compare;
		
		for(int j=0; j<s.length(); j++) {
			compare[s[j]-'0']++;
		}
		

		bool flag = false;	// base와 compare이 하나라도 다르면 true
		for(int j=0; j<=9; j++) {
			if(compare[j] > base[j]) flag = true;
		}

        // 카드로 나타낼 수 있는 수이고 소수이면 cnt 증가
		if(flag == false && eratos[i] == true) cnt++;
	}
	
    return cnt;
}