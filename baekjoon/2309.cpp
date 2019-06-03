#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;	
	int sum = 0;
	for(int i=0; i<9; i++) {
		int x;
		cin >> x;
		sum += x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	
	for(int i=0; i<9; i++) {
		for(int j=i+1; j<9; j++) {
			if(sum-v[i]-v[j] == 100) {
				for(int k=0; k<9; k++){
					if(k==i || k==j) {
						continue;
					}
					else {
						cout << v[k] <<"\n"; 
					}
				}
				
				return 0;
			}
		}
	}
	
	
	return 0;
}
