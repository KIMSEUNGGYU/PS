#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	
	bitset<100000> bitA(a), bitB(b);

	cout << (bitA & bitB) << "\n";
	cout << (bitA | bitB) << "\n";
	cout << (bitA ^ bitB) << "\n";
	cout << ~(bitA) << "\n";
	cout << ~(bitB) << "\n";

	return 0;
}