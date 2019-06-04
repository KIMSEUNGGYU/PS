#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1000000;
bool prime[MAX+1];
int main() {
	ios_base::sync_with_stdio(false);
	int n;
	// vector<bool> prime(MAX+1, 0);
	
	// 소수 다 찾기
	// 1이면 소수가 아니고 
	// // 0이면 소수다.
	for(int i=2; i*i<=MAX; i++) {
		// 소수이면 에라토스테네스의 체를 실행한다!!
		if(!prime[i]) {
			for(int j=(i*i)%MAX; j<=MAX; j+=i) {
				prime[j] = true;
			}
		}
	}

	while(1) {
		cin >> n;
		if(n==0) {
			break;
		}

		for(int i=2; i<=MAX; i++) {
			if(!prime[i]) {
				int j = n - i;

				if(!prime[j]) {
					cout << n << " = " << i << " + " << j;
					break;  
				}	
			}
		}
	}

	return 0;
}