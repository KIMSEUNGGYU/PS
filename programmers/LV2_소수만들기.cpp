#include <bits/stdc++.h>
using namespace std;

vector<bool> prime(3001, true);

// 에라토스테네스의 체 수행
void eratos_exe() {
    prime[0] = 0;
    prime[1] = 0;
    
    for(int i=2; i<=3001; i++) {
        if(prime[i] == true) {
            for(int j= i*2; j<=3001; j+=i) {
                prime[j] = false;
            }
        }
    }
}


int solution(vector<int> nums) {
    eratos_exe();
    
    int cnt = 0;
    // nCr
    int r = 3;  // 조합의 사이즈 
    vector<int> idx(r, 1);      // 조합을 만들기 위한 인덱스? 
    
    // 주어진 수 만큼 사이즈 만듦
    for(int i=0; i<nums.size()-r; i++) idx.push_back(0);
    sort(idx.begin(), idx.end());   // next_permutation은 첫번째부터 ~ 마지막 수 만듦;
    
    // 조합을 만들면서 각각의 합 구하고 그 값이 소수인지 판단
    do {
        int sum = 0;
        for(int i=0; i<idx.size(); i++) {
            if(idx[i] == 1) {
                sum += nums[i];
            }
        }
        
        if(prime[sum] == true) cnt++;
        
    } while(next_permutation(idx.begin(), idx.end()));
    
    return cnt;
}