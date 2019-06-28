// https://kimseunggyu.tistory.com/12
// 설명

#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    // 정렬
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    // 다른 부분 찾기
    for(int i=0; i<participant.size(); i++) {
        if(participant[i] != completion[i]) return participant[i];
    }
}
