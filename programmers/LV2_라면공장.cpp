#include <bits/stdc++.h>
using namespace std;

int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
    int cnt = 0;                // 최소 공급한 갯수
    priority_queue<int> pq;     // 우선순위 큐 (내가 공급받을 수 있는 날중 supplies 가 가장 큰 값을 하면 이득)
    
    int supply_day = 0;     	// dates 와 supplies 배열에 접근하기 위해
    
    // 0부터 < 30미만  이면 30일
    // 1부터 <= 30 이하 이면 30일, 하지만 비교하는 배열 dates 는 0부터 시작해서 일부러 맞춰주기 위해 0부터 시작
    for(int i=0; i<k; i++) {
        stock--;    // 매일 매일 stock 감소
        
        // 우선순위 큐에 supplies 추가
        if(i == dates[supply_day]) {
            pq.push(supplies[supply_day]);
            supply_day++;
        }
        
        // 만약 stock 없으면 우선순위 큐에 남아있는 supplies 중에서 가장 큰 값을 stock 에 추가
        if(stock < 0) {
            stock += pq.top();
            pq.pop();
            cnt++;
        }     
    }
    
    return cnt;
}