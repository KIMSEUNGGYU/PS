#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int min = 110;
	
	for(int i=0; i<7; i++) {
		int x;
		cin >> x;
		
		if(x%2==1) {
			if(min > x) {
				min = x;
			}	
			sum += x;
		}
	}
	
	// 7���� ���߿��� Ȧ���� ���ٸ� 
	if(sum == 0) cout << -1 << "\n";
	// �ϳ��� Ȧ���� �մٸ� 
	else cout << sum << "\n" << min << "\n";
	return 0;
}
