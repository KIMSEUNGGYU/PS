#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> l;
	int n, k;
	cin >> n >> k;
	
	// 1 ~ n 데이터 초기화
	for(int i=1; i<=n; i++) l.push_back(i);

	cout << "<";
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<k-1; j++) {
			l.push_back(l.front());
			l.pop_front();
		}
		cout << l.front() << ", ";
		l.pop_front();
	}	

	cout << l.front() << ">";
	return 0;
}