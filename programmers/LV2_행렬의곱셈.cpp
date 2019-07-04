#include <bits/stdc++.h>
using namespace std;

// 행렬의 곱 A*B 는 
// A의 열과 B의 행이 같아야한다.
// 또한, 결과는 A의 행 B의 열 의 갯수? 와 같아야 한다.

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int result_col = arr1.size();       // 2번째 줄 ( A의 열과 B의 행이 같아야한다 )
    int row = arr1[0].size();           // 3번째 줄 (  결과는 A의 행 B의 열 의 갯수? 와 같아야 함 )
    int result_row = arr2[0].size();    // 2번째 줄 ( A의 열과 B의 행이 같아야한다 )
    
    vector<vector<int>> answer;
    
    // 총 result_col 번 반복함, 결과의 각 행!
    for(int i=0; i<result_col; i++) {
        answer.push_back({});
        
        // 결과의 각 열에 접근 하기 위함
        for(int j=0; j<result_row; j++) {
            int val = 0;        // 각 행,열의 연산 값을 저장하기 위한 변수
            
            // 행렬 연산 (k 중요!)
            for(int k=0; k<row; k++) {
                val += arr1[i][k] * arr2[k][j];
            }
            
            // 계산된 값 저장
            answer[i].push_back(val);
        }
    }
    
    return answer;
}

/*  추가 설명
    i, j 로 알맞은 위치를 찾고, k 변수를 이용해 A 행렬의 가로로 접근, B행렬의 세로로 접근
*/
