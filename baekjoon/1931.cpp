/*
- ȸ�ǰ� ������ �ð��� �������� ���� ȸ�ǵ��� �� �� ����! 
  �׷��� �����ϴ� ������ end �� ����! 
- end �ð��� ������ start �� ������������ ����! 
���� �ð������� ������ �Ǿ����� �ʴٰ� �� ��, 
ȸ�� A�� (K,K)�̰�, ȸ�� B��(N,K)(N<K) ��� �� ��, 
ȸ�� A�� ���� ����Ǹ� ȸ�� B->A�� ������ �� �־������� ȸ�� A�� �����ϰ� ���� �������?
��, A: 8->8 �̰� B:7->8 �϶� B�� ���� �����ϰ� A�� ����� ���ִµ�
������ start ������ �������� ������ �ٸ� ��츦 ����ϴ� ��찡 ���� ���ִ�.(A���� ����� ��� �߻�)
*/

#include <iostream>
#include <algorithm>
using namespace std;

struct Time {
	int start, end;
};

bool compare(const Time &a, const Time &b) { 
    if(a.end == b.end) return a.start < b.start;
    else return a.end < b.end;
} 

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	Time arr[100010];
	int check[100010];
	int n;
	cin >> n;
	int from, to;
	for(int i=0; i<n; i++) {
		cin >> arr[i].start >> arr[i].end;
	}
	
	sort(arr, arr+n, compare);
	
	int cnt = 0;
	int now = 0;
	
	for(int i=0; i<n; i++) {
		if(now <= arr[i].start) {
			now = arr[i].end;
			cnt++;	
		}
	}
	
	cout << cnt <<"\n";

	return 0;
}
