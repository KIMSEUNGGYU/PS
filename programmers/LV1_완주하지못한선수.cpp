#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    // 1. 정렬 
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    // 일치하지 않는 부분 찾기
    for(int i=0; i<participant.size(); i++) {
        if(participant[i] != completion[i]) {
            answer = participant[i];
            return answer;
        }
    }
}