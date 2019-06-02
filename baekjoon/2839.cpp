#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int cnt = 0;
	
	while(n>=0 && n%5 !=0) {
		n-=3;
		cnt++;
	}
	
	if(n>=0) {
		cnt+=n/5;
		cout << cnt << "\n";
	} 
	else if(n<0) {
		cout << "-1\n";
	}
	
	return 0;
}

