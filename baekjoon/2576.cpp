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
	
	// 7개의 수중에서 홀수가 없다면 
	if(sum == 0) cout << -1 << "\n";
	// 하나라도 홀수가 잇다면 
	else cout << sum << "\n" << min << "\n";
	return 0;
}
