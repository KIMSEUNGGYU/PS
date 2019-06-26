#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int size = people.size();
    vector<int> check(size);
    int cnt = 0;
    bool flag = false;
    
    sort(people.begin(), people.end());
    for(int i=0; i<people.size(); i++) {
        flag = false;
        
        if(check[i] == 1) continue;
        for(int j=size-1; j>i; j--) {
            if(people[i]+people[j] <= limit && check[i] == 0 && check[j]==0) {
                cnt++;
                check[i] = 1;
                check[j] = 1;
                flag = true;
            }
        }
        if(flag == false) {
            cnt++;
        }
    }
    
    answer = cnt;
    return answer;
}
