#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string answer = "";
    string token;
    vector<long long> numbers;
    
    // 문자열 분리 후 정수형으로 변환
    for(stringstream sts(s); (sts >> token);) {
        numbers.push_back(stoi(token));
    }
    
    int size = numbers.size();
    
    // 최소 최대값 찾기
    int m = numbers[0];
    int M = numbers[0];
    for(int i=1; i<size; i++) {
        if(m > numbers[i]) m = numbers[i];
        if(M < numbers[i]) M = numbers[i];
    }
    
    // 최소값 공백 최대값 으로 정답 형식 맞추기
    answer += to_string(m);
    answer += " ";
    answer += to_string(M);
    
    return answer;
}