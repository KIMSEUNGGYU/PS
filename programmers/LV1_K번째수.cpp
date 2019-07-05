#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i=0; i<commands.size(); i++) {
        // 커맨드 정리, from 부터 to 까지 자르고 idx 의 값 반환
        int from = commands[i][0]-1;
        int to = commands[i][1]-1;
        int idx = commands[i][2]-1;
    
        // from 부터 to 까지 자르기
        vector<int> split;
        for(int j=from; j<=to; j++) split.push_back(array[j]);
        
        // 정렬
        sort(split.begin(), split.end());
        
        // 값 추가
        answer.push_back(split[idx]);
    }
    
    return answer;
}
