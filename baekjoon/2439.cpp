#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for(int i=1; i<=n; i++) {
		// 공백 출력 부분
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}

		// * 출력
		for(int j=1; j<=i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}