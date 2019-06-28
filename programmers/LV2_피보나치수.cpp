#include <bits/stdc++.h>
using namespace std;

int dp[100001];     // n 번째 피보나치 수

int solution(int n) {
    // dp 로 피보나치 수 구하기
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=n; i++) {
        dp[i] = (dp[i-1]+dp[i-2]) % 1234567;    
    }
    
    // n 번째 피보나치 수
    return dp[n];
}