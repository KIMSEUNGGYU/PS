#include <bits/stdc++.h>
using namespace std;

// ����� �� A*B �� 
// A�� ���� B�� ���� ���ƾ��Ѵ�.
// ����, ����� A�� �� B�� �� �� ����? �� ���ƾ� �Ѵ�.

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int result_col = arr1.size();       // 2��° �� ( A�� ���� B�� ���� ���ƾ��Ѵ� )
    int row = arr1[0].size();           // 3��° �� (  ����� A�� �� B�� �� �� ����? �� ���ƾ� �� )
    int result_row = arr2[0].size();    // 2��° �� ( A�� ���� B�� ���� ���ƾ��Ѵ� )
    
    vector<vector<int>> answer;
    
    // �� result_col �� �ݺ���, ����� �� ��!
    for(int i=0; i<result_col; i++) {
        answer.push_back({});
        
        // ����� �� ���� ���� �ϱ� ����
        for(int j=0; j<result_row; j++) {
            int val = 0;        // �� ��,���� ���� ���� �����ϱ� ���� ����
            
            // ��� ���� (k �߿�!)
            for(int k=0; k<row; k++) {
                val += arr1[i][k] * arr2[k][j];
            }
            
            // ���� �� ����
            answer[i].push_back(val);
        }
    }
    
    return answer;
}

/*  �߰� ����
    i, j �� �˸��� ��ġ�� ã��, k ������ �̿��� A ����� ���η� ����, B����� ���η� ����
*/
