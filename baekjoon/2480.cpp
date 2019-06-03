#include <iostream>
using namespace std;

int main() {
	int dice[3];
	for(int i=0; i<3; i++) cin >> dice[i];

	// 모두 같은 경우 
	if(dice[0] == dice[1] && dice[1] == dice[2]) {
		cout << 10000 + (dice[0]*1000) << "\n";	
	}
	// 모두 다른 경우
	else if(dice[0] != dice[1] && dice[1] != dice[2] && dice[2] != dice[0]) {
		// 첫번째가 가장 큰 경우 
		if(dice[0] >= dice[1] && dice[0] >= dice[2]) {
			cout << 100*dice[0] << "\n";
		}
		// 두번째가 가장 큰 경우
		else if(dice[1] >= dice[0] && dice[1] >= dice[2]) {
			cout << 100*dice[1] << "\n";
		}
		// 세번째가 가장 큰 경우
		else if(dice[2] >= dice[0] && dice[2] >= dice[1]) {
			cout << 100*dice[2] << "\n";
		}
	} 
	// 두개만 같은 경우 
	else {
		if(dice[0]==dice[1]) {
			cout << 1000+dice[0]*100;
		}
		else if(dice[1] == dice[2]) {
			cout << 1000 + dice[1]*100;
		} 
		else if(dice[2] == dice[0]) {
			cout << 1000 + dice[2]*100;
		} 
	} 
	
	return 0;
}
