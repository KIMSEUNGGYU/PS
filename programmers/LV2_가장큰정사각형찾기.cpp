#include <bits/stdc++.h>
#include<vector>
using namespace std; 

int dp[1001][1001]; // 정사각형 길이

int solution(vector<vector<int>> board) {
    int answer = 0;
    int xSize = board.size();
    int ySize = board[0].size();
    
    int max = 0;
  
  	// 행이 2 미만 또는 열이 2미만이면 아무리커도 최대 1.
	// 해당 경우에서 1이 하나라도 있으면 1 출력 
    if(xSize < 2 || ySize < 2) {
        for(int i=0; i<xSize; i++) {
            for(int j=0; j<ySize; j++) {
                if(board[i][j] == 1) max = 1;
            }
        }
    }
    // 행이 2이상인 경우 dp 를 이용해서 만들 수 있는 정사각형 크기 저장
	// 1인 값이 있을때만 사각형이 이어지므로 
	// 좌, 좌상, 상단에 있는 값을 고려해서 정사각형의 길이를 알 수 있음 
    else {
        for(int i=1; i<board.size(); i++) {
            for(int j=1; j<board[i].size(); j++) {
                if(board[i][j]==1) {
                    int m = min(board[i][j-1], min(board[i-1][j-1], board[i-1][j]));
                    board[i][j] = m+1;
                    if(max < board[i][j]) max = board[i][j];
                }
            }
        }
    }
    
    answer = max*max;
    
    return answer;
}
