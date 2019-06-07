/*
1. ���ȣ�� �Է¹޴´�. (��Ʈ��)
2. �Է¹��� ���� �ϳ��� �޾� �ߺ��� ���� �ִ��� Ȯ���Ѵ�. 
	map
3. 6�� 9�� ���ϰ� /2 �� �Ѵ�.  
4. 6�� 9�� �����ϰ� '0' ~ '9' ���� �ְ�� ���� �ʿ��� ������ ���Ѵ�.
5. 3���� ���� ���� 4���� ���� �ִ밪�� ���� ū���� ����Ѵ�. 
*/

#include <iostream>
#include <string>
#include <map> 
using namespace std;

int main() {
	string n; 	// ���ȣ
	map<int, int> m;
	cin >> n;

	for(auto x:n) {
		m[x-'0']++;
	}
	int max = -1;
	int sum = 0;	// 6�� 9�� �� 

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
