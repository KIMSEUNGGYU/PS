#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c;
	int arr[10] = {0, };
	string s;
	
	cin >> a >> b >> c;
//	long long value = a*b*c;
	
	s= to_string(a*b*c);

	for(auto x:s) {
		arr[x-'0']++;
	}
	
	for(int i=0; i<10; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}
