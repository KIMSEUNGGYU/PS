#include <iostream>
using namespace std;

int main() {
	// ���� = 30�� - 10 ��  
	// �ν� = 60�� - 15 �� 
	int y=0, m=0; 
	int n;
	cin >> n;
	int call = 0;
	for(int i=0; i<n; i++) {
		int x;	// x�� ��ȭ �ð� 
		cin >> x;
		
		y += ((x/30)+1)*10;
		m += ((x/60)+1)*15;
	}
	
	if(y < m) {
		cout << "Y " << y << "\n";
	} 
	else if(y == m) {
		cout << "Y M " << y << "\n";
	}
	else {
		cout << "M " << m << "\n";
	}
	 
	return 0;
}
