#include <iostream>
using namespace std;

int main() {
	int arr[10];
	int max = -1;
	int idx = -1;
	
	for(int i=1; i<=9; i++) {
		int x;
		cin >> x;
		if(max < x) {
			max = x;
			idx = i;
		}
	}
	
	cout << max << "\n" << idx << "\n";
	
	return 0;
}
