#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		// 첫번째 영역 처리 
		if(i==1) {
			// 공백 
			for(int j=1; j<=n-1; j++) {
				cout << " ";
			}
			
			// *
			for(int j=1; j<=i; j++) {
				cout << "*";
			}
		}
		
		// 마지막 영역 처리
		else if(i==n) {
			// * 
			for(int j=1; j<=2*i-1; j++) {
				cout << "*";
			} 
		}
		// 사이부분 처리 
		else {
			// 앞 공백
			for(int j=1; j<=n-i; j++) {
				cout << " ";
			} 
			
			// * 
			cout << "*";
			
			// 중간 공백
			for(int j=1; j<=2*i-3; j++) {
				cout << " ";
			}
			
			// * 
			cout << "*";
		}
		
		cout << "\n";
	}
	
	return 0;
}
