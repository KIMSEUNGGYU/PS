#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int cnt = 0;
    vector<int> students(n+1, 1);     // 체육복 다 하나씩 있음
    
    // 잃어버린 학생
    for(int lo:lost) students[lo]--;
    
    // 여분있는 학생 체육복 추가
    for(int re:reserve) students[re]++;
    
    // 여분 있는 학생이 체육복 챙겨주기
    for(int i=1; i<=n; i++) {
        // 첫 번째는 오른쪽만 줄 수 있음 
        if(i==1) {
            if(students[i] >=2 && students[i+1] == 0) {
                students[i]--;
                students[i+1]++;
            }
        }
        // 마지막은 왼쪽만 줄 수 있음 
        else if(i==n) {
            if(students[i] >=2 && students[i-1] == 0) {
                students[i]--;
                students[i-1]++;
            }
        }
        // 사이에 있으면 왼쪽, 오른쪽 줄 수 있음
        // (오른쪽 부터 주면 통과못함.. 왜?)
        else {
            // 왼쪽 학생 체육복 없으면 체육복 줌
            if(students[i] >=2 && students[i-1] == 0)  {
                students[i]--;
                students[i-1]++;
            }
            
            // 오른쪽 학생 체육복 없으면 체육복 줌
            if(students[i] >=2 && students[i+1] == 0)  {
                students[i]--;
                students[i+1]++;
            }
        }
    }
    
    // 학생 수 세기
    for(int i=1; i<=n; i++) {
        if(students[i]>0) cnt++;
    }
    
    return cnt;
}
