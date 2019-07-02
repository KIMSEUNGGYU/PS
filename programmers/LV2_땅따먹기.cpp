#include <bits/stdc++.h>
using namespace std;

int dp[100001][5];  // N번째 행 j번째 열에서 올 수 있는 가장 큰 값, 단, [n-1][j] 를 제외한 것 중 가장 큰 값
int solution(vector<vector<int> > land) {
    
    // 0번째의 경우 그 위 행과 비교할 게 없어 따로 처리
    for(int i=0; i<4; i++) dp[0][i] = land[0][i];
    
    for(int i=1; i<land.size(); i++) {
        for(int j=0; j<4; j++) {
            int M = -1; // 각 경우당 가장 큰 값
            
            // 이전 행에서 현재 열과 이전 열과 같은 인덱스를 제외하고 가장 큰 값 찾기
            for(int k=0; k<4; k++) {
                if(j!=k) {
                    M = max(M, dp[i-1][k]);    
                }
            }
            
            // dp 식
            // 이전 행 값(같은 열 제외) 중 가장 큰 값 + 현재 land 값
            dp[i][j] = M + land[i][j];
        }
    }
    
    // 정답찾기
    int answer = -1;
    // 마지막 열중 가장 큰 값 찾기
    for(int j=0; j<4; j++) {
        answer = max(answer, dp[land.size()-1][j]);
    }

    return answer;
}