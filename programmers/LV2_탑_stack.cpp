#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer(heights.size());
    
	// 자료형이 스택은 아니지만 스택 개념인 LIFO 개념으로 접근
    while(!heights.empty()) {
        int base = heights.back();
        heights.pop_back();
        
        for(int i=heights.size()-1; i>=0 ;i--) {
            if (heights[i] > base) {
                answer[heights.size()] = i+1;
                break;
            }
        }
    }
    
    return answer;
}