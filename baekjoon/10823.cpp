#include <iostream>
#include <string>
using namespace std;

int main() {
	string line;
	stinrg s;
	while(cin>>line) {
		s+=line;
	}
	istringstream sin(s);

	string number;
	int sum=0;
	while(getline(sin, s, ',')) {
		 sum+=stoi(number);
	}
	cout << sum;
	return 0;
}