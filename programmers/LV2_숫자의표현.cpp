#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int answer = 0;
    
	// 1부터 n까지 차례대로 더하기 위함(첫번째 시작점)
    for(int i=1; i<=n; i++) {
        int sum = 0;
		
		// i부터 n 까지 더함
		// 하지만 중간에 n 이랑 같으면 나감(정답), sum 값이 특정 경우에 커지면 앞으로 커지므로 나감(효율성 때문에)
        for(int j=i; j<=n; j++) {
            sum += j;
            if(sum == n) {
                answer++;
                break;
            }
            
            // 해당 코드 없으면 효율성 테스트 미 통과
            if(sum > n) break;
        }
    }
    
    return answer;
}