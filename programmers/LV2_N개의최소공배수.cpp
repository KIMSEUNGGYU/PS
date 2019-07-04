#include <bits/stdc++.h>
using namespace std;

// n과 m의 최대공약수 구하는 함수
// 유클리드 호제법
int GCD (int n, int m) {
    int b=n, a=m;
    // 만약 b가 더 크다면 a와 b 값 swap 
    if(b > a) swap(b, a);
    
    // 최대공약수 구하기 
    while(1) {
        int mod = a%b;
        
        if(mod == 0) return b;
        
        a = b;
        b = mod;
    }
}


int solution(vector<int> arr) {
    int answer = 0;
    
    // 첫번째의 경우 따로 처리 (0번째 1번째 lcm 구하기) 
    int gcd = GCD(arr[0], arr[1]);
    int lcm =  arr[0] / gcd * arr[1] / gcd * gcd;
    
    // 2번째부터 마지막까지 lcm 구함
	// 마지막 lcm 이 정답임 
    for(int i=2; i<arr.size(); i++) {
        int gcd = GCD(arr[i], lcm);
        lcm = arr[i] / gcd * lcm / gcd * gcd;
    }

	// 마지막 lcm 이 정답임
    answer = lcm;
    return answer;
}
