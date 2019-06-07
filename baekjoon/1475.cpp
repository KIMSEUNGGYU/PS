/*
1. 방번호를 입력받는다. (스트링)
2. 입력받은 수를 하나씩 받아 중복된 값이 있는지 확인한다. 
	map
3. 6과 9를 더하고 /2 를 한다.  
4. 6과 9를 제외하고 '0' ~ '9' 까지 최고로 많이 필요한 갯수를 구한다.
5. 3에서 구한 값과 4에서 구한 최대값을 비교해 큰수를 출력한다. 
*/

#include <iostream>
#include <string>
#include <map> 
using namespace std;

int main() {
	string n; 	// 방번호
	map<int, int> m;
	cin >> n;

	for(auto x:n) {
		m[x-'0']++;
	}
	int max = -1;
	int sum = 0;	// 6과 9의 합 

	for(int i='0'; i<='9'; i++) {
		if(i=='6' || i=='9') {
			sum += m[i-'0'];
			continue;
		} 
		if(max < m[i-'0']) max = m[i-'0'];
	}
	if(sum%2==1) sum += 1;
	
	max<sum/2?cout<<sum/2<<"\n":cout<<max<<"\n";
	return 0;
} 
