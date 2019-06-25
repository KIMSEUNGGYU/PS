#include <bits/stdc++.h>
#include<vector>
using namespace std; 

int dp[1001][1001]; // ���簢�� ����

int solution(vector<vector<int>> board) {
    int answer = 0;
    int xSize = board.size();
    int ySize = board[0].size();
    
    int max = 0;
  
  	// ���� 2 �̸� �Ǵ� ���� 2�̸��̸� �ƹ���Ŀ�� �ִ� 1.
	// �ش� ��쿡�� 1�� �ϳ��� ������ 1 ��� 
    if(xSize < 2 || ySize < 2) {
        for(int i=0; i<xSize; i++) {
            for(int j=0; j<ySize; j++) {
                if(board[i][j] == 1) max = 1;
            }
        }
    }
    // ���� 2�̻��� ��� dp �� �̿��ؼ� ���� �� �ִ� ���簢�� ũ�� ����
	// 1�� ���� �������� �簢���� �̾����Ƿ� 
	// ��, �»�, ��ܿ� �ִ� ���� ����ؼ� ���簢���� ���̸� �� �� ���� 
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
