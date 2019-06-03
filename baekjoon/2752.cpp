#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	// a가 가장 크면
	if(a > b && a > c) {
		if(b>c) cout << c << " " << b << " " << a <<"\n";
		else cout << b << " " << c << " " << a <<"\n";
	} 
	
	// b가 가장 크면
	else if(b>a && b>c) {
		if(a>c) cout << c << " " << a << " " << b <<"\n";
		else cout << a << " " << c << " " << b <<"\n";
	} 
	
	// c가 가장 크면 
	else if(c>a && c>b) {
		if(a>b) cout << b << " " << a << " " << c <<"\n";
		else cout << a << " " << b << " " << c <<"\n";
	} 
	
	
	return 0;
}
