#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> tips;
	for(int i=0; i<n; i++) {
		int tip;
		cin >> tip;
		tips.push_back(tip);
	}
	
	sort(tips.begin(), tips.end(), greater<int>());
	
	long long total = 0;
	for(int i=0; i<tips.size(); i++) {
		int tip = tips[i] - ((i+1) - 1);

		if(tip <= 0) tip = 0;
		
		
		total += tip;
	}
	
	cout << total << "\n";
	
	return 0;
}


/* 실수 
total 의 범위는 int 형의 범위를 넘음

팁은 100000 개가 오고 N도 99999 이므로 쉽게 수의 범위를 쉽게 계산하면 
 100000 * 100000 = 10000000000 (백억) 이므로 int 형의 범위를 넘어선다.
 
 따라서 long long 형으로 선언해야함 

*/
 
