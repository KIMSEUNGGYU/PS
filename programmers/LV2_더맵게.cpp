/*  �켱���� ť�� �� ����
    ���� ����ϰ� �� ���� �ٽ� ������������ ���ĵǸ� ����� ���� ������
*/
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> scoville, int K) {
    int cnt = 0;
    
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i=0; i<scoville.size(); i++) pq.push(scoville[i]);    
    while(!pq.empty()) { 
        // ù ��° �� �ſ� �� ����
        int mix1 = pq.top();
        pq.pop();
        
        if(mix1 < K) {
            // �� �̻� �����Ұ� ���� K ���� ���� -1 
            if(pq.size() == 0) return -1;

            // �� ��° �� �ſ� �� ����
            int mix2 = pq.top();
            pq.pop();
            
            // ����
            int value = mix + mix*2;
             
            pq.push(value);
            cnt++;
        }
    }

    return cnt;
}
