#include <bits/stdc++.h>
using namespace std;

int main() {
	// �Է� ȿ���� ó�� �κ� ������ �ð� �ʰ� ���� 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int numbers[10001] = {0, };
	int number;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> number;
		numbers[number]++;
	}
	
	for(int i=1; i<10001; i++) {
		for(int j=0; j<numbers[i]; j++) {
			cout << i << "\n";
		}
	}
	
	return 0;
}
