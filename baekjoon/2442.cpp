#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for(int i=n; i>0; i--) {
		// 공백 출력
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}
		// * 출력
		for(int j=1; j<=i*2-1; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}