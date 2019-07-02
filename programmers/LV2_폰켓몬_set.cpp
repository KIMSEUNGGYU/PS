#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
	int answer = 0;
    int ban = nums.size() / 2;		// 주어진 값 반 (반 개의 수)
    
	// 중복된 값을 추가하지 않기 위해 set 이용
    set<int> key;
    
	// 종류를 추가 단, 중복되면 저장되지 않음
    for(int i=0; i<nums.size(); i++) {
        key.insert(nums[i]);
    }
    
	// 총 종류의 갯수 
    int cnt = 0;
    for(int k:key) {
        cnt++;
    }
    
	// 다양한 종류(종류 > 입력 수 반)가 있지만 입력 수가 적으면 입력 수를 반환
    if(ban < cnt ) answer = ban;
	// 반 개의 수가 많으면 종류를 반환
    else if(ban > cnt) answer = cnt;
    else answer = ban;
    
	return answer;
}