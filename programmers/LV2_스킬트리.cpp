#include <bits/stdc++.h>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int cnt = 0;    // 가능한 스킬트리 갯수
    
    // 각 경우 탐색
    for(int i=0; i<skill_trees.size(); i++) {
        string temp;
        
        // skill_trees 안에 skill 이 있는지 찾음
        for(int j=0; j<skill_trees[i].length(); j++) {
            if(skill.find(skill_trees[i][j]) != -1) temp += skill_trees[i][j];
        }
        
        // skill 의 순서대로 있는지 확인
        bool flag = true;
        for(int j=0; j<temp.length(); j++) {
            if(skill[j] != temp[j] ) {
                flag = false;
                break;
            }
        }
        
        if(flag) cnt++;
    }
    
    return cnt;
}
