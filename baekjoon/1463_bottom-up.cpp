#include <iostream>
using namespace std;
const int MAX = 10000001;
int d[MAX];
int main() {
	int n;
	cin >> n;

	d[1] = 0;

	for(int i=2; i<=n; i++) {
		d[i] = d[i-1]+1;
		if(i%2==0 && d[i] > d[i/2]+1) d[i] = d[i/2] +1;
		if(i%3==0 && d[i] > d[i/3]+1) d[i] = d[i/3] +1;
	}

	printf("%d\n", d[n]);
	
	return 0;	
}