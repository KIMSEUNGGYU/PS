#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.begin(), people.end());
    
    int start = 0;
    int j;
    
    // 맨 앞에서부터 맨 뒤에서부터 더해서 limit 보다 작은지 비교
    // 만약 limit 보다 크면 맨 뒤값은 무조건 혼자 처리 밖에 못함 (그래서 +1)
    // 그렇지 않으면 앞과 뒤를 더할 수있으므로 +1 하고 start 도 +1 해줌
    for(j=people.size()-1; j>start; j--) {
        if(people[start] + people[j] <= limit) {
            answer++;
            start++;
        }
        else {
            answer++;
        }
    }
    
    // 마지막 하나만 남은 경우? +1
    if(start == j) answer++;
    
    
    return answer;
}