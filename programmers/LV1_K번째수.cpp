#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i=0; i<commands.size(); i++) {
        // Ŀ�ǵ� ����, from ���� to ���� �ڸ��� idx �� �� ��ȯ
        int from = commands[i][0]-1;
        int to = commands[i][1]-1;
        int idx = commands[i][2]-1;
    
        // from ���� to ���� �ڸ���
        vector<int> split;
        for(int j=from; j<=to; j++) split.push_back(array[j]);
        
        // ����
        sort(split.begin(), split.end());
        
        // �� �߰�
        answer.push_back(split[idx]);
    }
    
    return answer;
}
