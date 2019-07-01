#include <bits/stdc++.h>
using namespace std;

int solution(string name) {
    int cnt = 0;
    int idx = 0;

    while(1) {
        // 모두 A 인지 비교
        bool flag = false;
        for(int i=0; i<name.length(); i++) {
            if(name[i] != 'A') flag = true;
        }
        if(flag == false) break;
        
        // 좌 우 중 가까운 곳으로 이동 
        int leftCnt = 0;
        int rightCnt = 0;
        
        // 오른쪽 검사
		int rightIdx = idx;
        for(int i=0; i<name.length(); i++) {
			if(rightIdx == name.length()) rightIdx = 0;
            if(name[rightIdx] != 'A') break;
            rightCnt++;
			rightIdx++;
        }
        
        // 왼쪽 검사
        int leftIdx = idx;
        for(int i=0; i<name.length(); i++) {
            if(leftIdx < 0) leftIdx = name.length()-1;
            if(name[leftIdx] != 'A') break;
            leftIdx -= 1;
            leftCnt++;
        }
        
		// 이동하지 않는 경우
        if(rightCnt == 0 && leftCnt == 0) {
            // 문자열 처리
            cnt += min(name[idx]-'A', 'Z'-name[idx]+1);
            name[idx] = 'A';
            continue;
        }
		// 오른쪽으로 이동
        else if(rightCnt <= leftCnt) {
            idx = (idx + rightCnt) % name.length();
            cnt += rightCnt;
        }
		// 왼쪽으로 이동
        else {
            idx = (idx  - leftCnt + name.length()) % name.length();
            cnt += leftCnt;
        }
        
        // 문자열 처리
        cnt += min(name[idx]-'A', 'Z'-name[idx]+1);
        name[idx] = 'A';
    }
    
    return cnt;
}