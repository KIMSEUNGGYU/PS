// https://pangsblog.tistory.com/21

/*
실수 

너무 단순한 경우만 생각함

- 35, 33, 30, 20, 12 가 주어질때 고려안함!
즉, 모든 것을 하는게 아닌 일부만 사용해도 되는 조건을 무시함!!
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	vector<int> v;
	scanf("%d", &n);
	int temp = n;
	while(temp--) {
		int w;
		scanf("%d", &w);
		v.push_back(w);
	}

	// 정렬, 내림차순
	sort(v.begin(), v.end(), greater<int>());

	// 최대값 찾기
	// 내림차순으로 정렬했기 때문에 i번째는 각 경우마다 작은 수들이 들어있다.
	// 따라서 작은 수 중에서 각 경우가 몇개 인지 곱한뒤에 max 값을 구하면 
	// 결국에는 가장 큰 경우가 나타나는 것을 알 수있다.
	int max = -1;
	for(int i=0; i<n; i++) 
		if(max < v[i]*(i+1)) max = v[i]*(i+1);
	
	printf("%d\n", max);

	return 0;
}