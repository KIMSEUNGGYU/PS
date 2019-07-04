/*  우선순위 큐를 쓴 이유
    값을 계산하고 그 값이 다시 오름차순으로 정렬되면 계산이 쉽기 때문에
*/
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> scoville, int K) {
    int cnt = 0;
    
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i=0; i<scoville.size(); i++) pq.push(scoville[i]);    
    while(!pq.empty()) { 
        // 첫 번째 안 매운 값 얻음
        int mix1 = pq.top();
        pq.pop();
        
        if(mix1 < K) {
            // 더 이상 연산할게 없고 K 보다 낮아 -1 
            if(pq.size() == 0) return -1;

            // 두 번째 안 매운 값 얻음
            int mix2 = pq.top();
            pq.pop();
            
            // 연산
            int value = mix + mix*2;
             
            pq.push(value);
            cnt++;
        }
    }

    return cnt;
}
