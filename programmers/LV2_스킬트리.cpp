#include <bits/stdc++.h>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int cnt = 0;    // ������ ��ųƮ�� ����
    
    // �� ��� Ž��
    for(int i=0; i<skill_trees.size(); i++) {
        string temp;
        
        // skill_trees �ȿ� skill �� �ִ��� ã��
        for(int j=0; j<skill_trees[i].length(); j++) {
            if(skill.find(skill_trees[i][j]) != -1) temp += skill_trees[i][j];
        }
        
        // skill �� ������� �ִ��� Ȯ��
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
