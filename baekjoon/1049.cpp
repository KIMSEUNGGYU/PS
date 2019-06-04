/*
실수 및 고려사항
- 패키지, 낱개를 복합적인 최소값 생각하기 
- 각 브랜드별로 패키지, 낱개를 복합적으로 고려하기 

- 6개씩 처리하고 남은 갯수를 처리할때 낱개 * n(남은 갯수)로 해야하는데 6으로 처리
*/

#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int answer = 0;
	int min_package=1100, min_individual=1100;

	// 주어진 패키지 별 가격, 낱개 가격 중 최소값 찾기
	for(int i=0; i<m; i++) {
		int package, individual;
		cin >> package >> individual;
		if(package < min_package) min_package = package;
		if(individual < min_individual) min_individual = individual;
	}

	// 1. 끊어진 줄 갯수를 6개씩 처리 
	// 패키지, 낱개 고려
	// 패키지로 구매했을때 더 쌀 경우
	if(min_package < min_individual*6) answer += (n/6) * min_package;
	// 낱개를 6개 구매하는게 더 쌀 경우
	else answer += (n/6) * min_individual * 6;
	
	// 남은 갯수 처리
	n %= 6;

	// 2. 남은 부분 처리
	// 패키지로 구매했을때 가격
	if(min_package < min_individual*n) answer += min_package;
	else answer += n*min_individual;

	// 최소로 구매했을때 가격
	cout << answer << "\n";

	return 0;
}