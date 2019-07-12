#include <bits/stdc++.h>
using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> day = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    vector<int> dayCnt = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;
    
    for(int i=0; i<a-1; i++) {
        days += dayCnt[i];
    }

    days += b-1;
    answer = day[days%7];
    
    return answer;
}
