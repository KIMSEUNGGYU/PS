#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for(int i=1; i<=n; i++) {
		// ù��° ���� ó�� 
		if(i==1) {
			// ���� 
			for(int j=1; j<=n-1; j++) {
				cout << " ";
			}
			
			// *
			for(int j=1; j<=i; j++) {
				cout << "*";
			}
		}
		
		// ������ ���� ó��
		else if(i==n) {
			// * 
			for(int j=1; j<=2*i-1; j++) {
				cout << "*";
			} 
		}
		// ���̺κ� ó�� 
		else {
			// �� ����
			for(int j=1; j<=n-i; j++) {
				cout << " ";
			} 
			
			// * 
			cout << "*";
			
			// �߰� ����
			for(int j=1; j<=2*i-3; j++) {
				cout << " ";
			}
			
			// * 
			cout << "*";
		}
		
		cout << "\n";
	}
	
	return 0;
}
