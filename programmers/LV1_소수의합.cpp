#include <vector>
using namespace std;

long long solution(int N) {
    long long sum = 0;              // 소수들의 합 저장 변수
    vector<int> check(N, 1);      // 소수인지 확인하는 변수(모두 소수로 초기화) 
    // +1 하는 이유는 0번째 부터 시작해서
    // 1이면 소수
    // 0이면 소수 아님
    
    for(int i=2; i<=N; i++) {
        // 소수이면 에라토스테네스의 체 수행
        // 해당 값을 제외하고 그 배수는 소수아님으로 처리
        if(check[i] == 1) {
            for(int j=i*2; j<=N; j+=i) {
                check[j] = 0;
            } 
        }
    }
    
    // 소수만 더하기
    for(int i=2; i<=N; i++) {
        if(check[i] == 1) sum += i;
    }
    
    return sum;
}