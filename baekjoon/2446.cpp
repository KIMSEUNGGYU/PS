#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	// 윗부분
	for(int i=n; i>=1; i--) {
		// 공백 
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}
		
		// 별
		for(int j=1; j<=2*i-1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	
	// 아랫부분
	for(int i=2; i<=n; i++) {
		// 공백
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}
		
		// 별
		for(int j=1; j<=2*i-1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	
	return 0;
}
