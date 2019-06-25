#include <bits/stdc++.h>

// 각 수포자 찍는 패턴 저장 
vector<int> supo1 = {1, 2, 3, 4, 5};
vector<int> supo2 = {2, 1, 2, 3, 2, 4, 2, 5};
vector<int> supo3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    
    vector<int> answer;         // 정답을 저장할 공간
    vector<int> score(4);       // 각 수포자가 총 몇개 맞는지 기록 
                                // 1, 2, 3으로 접근하기 위해 총 4개의 공간할당
    
    // 각 수포자의 패턴이 총 몇개로 되어있는지 (후에 반복할때 mod로 1, 2, ... 끝, 1, 2, ..)
    int supo1Mod = supo1.size();    
    int supo2Mod = supo2.size();
    int supo3Mod = supo3.size();

    // 각 문제당 수포자가 몇개 맞았는지 처리
    for(int i=0; i<answers.size(); i++) {
        if(answers[i] == supo1[i%supo1Mod]) score[1]++;
        if(answers[i] == supo2[i%supo2Mod]) score[2]++;
        if(answers[i] == supo3[i%supo3Mod]) score[3]++;
    }
    
    // 최대값 찾기
    int M = max(score[1], max(score[2], score[3]));
    
    // 제일 많이 맞는 사람 찾기 및 중복될 경우 오름찬순으로 저장
    for(int i=1; i<score.size(); i++) {
        if(M == score[i]) answer.push_back(i+1);
    }
   
    return answer;
}
