/*
1. 주어진 입력 값을 모두 문자열 형태로 변환
2. 정렬함.
	정렬의 규칙은 내림차순으로 정 렬  
3. 정렬된 값을 answer 에 대입함
4. 모두 0인 경우를 고려해야하므로 
	내림차순으로 정렬했으므로 첫번째가 0인 경우에는 모두 0인 경우. 
5. 4번을 고려해 answer 에 대입 
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(const string &a, const string &b) {
    return a+b>b+a ? true: false;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> strNumbers;
    
    for(auto number: numbers) strNumbers.push_back(to_string(number));
    
    sort(strNumbers.begin(), strNumbers.end(), cmp);
    
    for(auto number: strNumbers) answer += number;
    
    // 모두 0 인 경우 "0" 으로 출력  
    if(answer[0] == '0') answer = "0";
    
    return answer;
}
