#include <iostream>
#include <string>
#include <list> 
// '-' : �齺���̽�
// '<' : ���� ȭ��ǥ
// '>' : ������  ȭ�� 
using namespace std;

int main() {
	int t;
	string l;
	list<char> li;
	cin >> t;
	
	while(t--) {
		cin >> l;
		li.clear();
		auto cursor = li.end();	
		// �Ǽ�, �ش� �κ��� while�� �ۿ� �����ؼ� ��Ÿ�ӿ��� 

		for(auto x:l) {
			// ���� �̵� 
			if(x=='<') {
				if(cursor != li.begin()) --cursor;	
			}
			// ������ �̵� 
			else if(x=='>') {
				if(cursor != li.end()) ++cursor;
			}
			// �� ���� 
			else if(x=='-') {
				if(cursor != li.begin()) {
					auto temp = cursor;
					--cursor;
					li.erase(cursor);
					cursor = temp;
				}
			}
			// ��й�ȣ �Է��Ѱ�! 
			else {
				li.insert(cursor, x);
			}
		}
		
		for(auto x:li) {
			cout << x;
		}
		cout <<"\n";
	}
	
	return 0;
}
