// https://kimseunggyu.tistory.com/16 설명

#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int > cloth;
    set<string> key;
    
    // 각 카테고리당 몇개의 아이템이 있는지 파악 
    // 각 카테고리 저장, 단, 중복을 방지하기 위해 set 이용
    for(int i=0; i<clothes.size(); i++) {
        cloth[clothes[i][1]]++;
        key.insert(clothes[i][1]);
    }
    
    // 각 조합의 수? 계산
    for(auto it:key) {
        answer *= cloth[it]+1;
    }
    // 모두 포함하지 않는 경우 빼기
    answer -=1;
    
    return answer;
}