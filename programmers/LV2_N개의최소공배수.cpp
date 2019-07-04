#include <bits/stdc++.h>
using namespace std;

// n�� m�� �ִ����� ���ϴ� �Լ�
// ��Ŭ���� ȣ����
int GCD (int n, int m) {
    int b=n, a=m;
    // ���� b�� �� ũ�ٸ� a�� b �� swap 
    if(b > a) swap(b, a);
    
    // �ִ����� ���ϱ� 
    while(1) {
        int mod = a%b;
        
        if(mod == 0) return b;
        
        a = b;
        b = mod;
    }
}


int solution(vector<int> arr) {
    int answer = 0;
    
    // ù��°�� ��� ���� ó�� (0��° 1��° lcm ���ϱ�) 
    int gcd = GCD(arr[0], arr[1]);
    int lcm =  arr[0] / gcd * arr[1] / gcd * gcd;
    
    // 2��°���� ���������� lcm ����
	// ������ lcm �� ������ 
    for(int i=2; i<arr.size(); i++) {
        int gcd = GCD(arr[i], lcm);
        lcm = arr[i] / gcd * lcm / gcd * gcd;
    }

	// ������ lcm �� ������
    answer = lcm;
    return answer;
}
