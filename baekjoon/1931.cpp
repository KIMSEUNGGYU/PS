/*
- 회의가 끝나는 시간이 빠를수록 많은 회의들을 할 수 있음! 
  그래서 정렬하는 기준을 end 로 잡음! 
- end 시간이 같을때 start 를 오름차순으로 정렬! 
시작 시간순으로 정렬이 되어있지 않다고 할 때, 
회의 A가 (K,K)이고, 회의 B가(N,K)(N<K) 라고 할 때, 
회의 A가 먼저 진행되면 회의 B->A를 진행할 수 있었음에도 회의 A만 진행하게 되지 않을까요?
즉, A: 8->8 이고 B:7->8 일때 B가 먼저 수행하고 A가 수행될 수있는데
같을때 start 순으로 정렬하지 않으면 다른 경우를 고려하는 경우가 없을 수있다.(A번만 고려할 경우 발생)
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
