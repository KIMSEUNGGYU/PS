#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	// 윗부분  
	for(int i=1; i<=n; i++) {
		// 공백
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}
		
		// *
		for(int j=1; j<=i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	
	// 아랫부분 
	for(int i=n-1; i>=1; i--) {
		// 공백
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}
		
		// * 
		for(int j=1; j<=i; j++) {
			cout << "*";
		}
		cout << "\n"; 
	} 
	
	return 0;
} 
