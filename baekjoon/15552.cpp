#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	int A, B;
	cin >> t;
	while(t--) {
		cin >> A >> B;
		cout << A+B <<"\n";
	}

	return 0;
}
