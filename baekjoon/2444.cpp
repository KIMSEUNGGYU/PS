#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	// 삼각형 출력
	for(int i=1; i<=n; i++) {
		// 공백 
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}
		// * 
		for(int j=1; j<=i*2-1; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	// 역삼각형 출력
	// 밑 삼각형 출력, 단 n-1 까지
	for(int i=n-1; i>=1; i--) {
		// 공백 
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}

		// * 
		for(int j=1; j<=2*i-1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	
	return 0;
}