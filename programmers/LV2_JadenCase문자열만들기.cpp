#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string answer = "";
    bool flag = false;  // 띄어쓰기를 만났다면 true
    
    answer += toupper(s[0]);
    
    // 문자열의 길이만큼 반복
    for(int i=1; i<s.length(); i++) {
        // 공백인 경우
        if(s[i] == ' ') {
            answer += ' ';
            flag = true;
        } 
        // 공백이 아닌 경우
        else {
            // 띄어쓰기를 만났다면 첫 글자는 대문자
            if(flag == true) {
                answer += toupper(s[i]);
                flag = false;
            }
            // 첫 글자가 아닌 경우
            else {
                answer += tolower(s[i]);
            }
        }
    }
    
    return answer;
}