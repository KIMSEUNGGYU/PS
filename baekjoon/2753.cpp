#include <iostream>
using namespace std;

int main() {
	int y;
	cin >> y;
	
	if(y%4==0) {
		if(y%100 != 0 || y%400 == 0) {
			cout << "1\n";
		} else cout << "0\n";
	} else cout <<"0\n";
		
	return 0;
}