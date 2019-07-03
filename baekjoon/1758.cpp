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


/* �Ǽ� 
total �� ������ int ���� ������ ����

���� 100000 ���� ���� N�� 99999 �̹Ƿ� ���� ���� ������ ���� ����ϸ� 
 100000 * 100000 = 10000000000 (���) �̹Ƿ� int ���� ������ �Ѿ��.
 
 ���� long long ������ �����ؾ��� 

*/
 
