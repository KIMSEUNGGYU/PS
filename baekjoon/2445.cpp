#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	// 윗부분
	for(int i=1; i<=n; i++) {
		// *
		for(int j=1; j<=i; j++) {
			cout << "*";
		}
		
		// 공백
		for(int j=1; j<=(n-i)*2; j++) {
			cout << " ";
		}
		
		// * 
		for(int j=1; j<=i; j++) {
			cout << "*";
		}
		cout << "\n";
	} 
	
	// 아랫부분
	for(int i=1; i<=n-1; i++) {
		// *
		for(int j=1; j<=n-i; j++) {
			cout << "*";
		}
		
		// 공백
		for(int j=1; j<=i*2; j++) {
			cout << " ";
		}
		
		// * 
		for(int j=1; j<=n-i; j++) {
			cout << "*";
		}
		cout << "\n";
	} 
	
	return 0;
}
