#include <iostream>
#include <vector>
using namespace std;

vector<int> charges = {500, 100, 50, 10, 5, 1};
int main() {
	int n;
	scanf("%d", &n);
	int cnt = 0;			// 거스름돈 갯수
	int charge = 1000 - n;	// 줘야할 거스름돈

	for(int i=0; i<charges.size(); i++) {		
		if(charge >= charges[i]) {
			cnt += charge / charges[i];
			charge %= charges[i];
		}
	}
	
	printf("%d\n", cnt);
	return 0;
}