#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int cnt = 0;
    vector<int> students(n+1, 1);     // ü���� �� �ϳ��� ����
    
    // �Ҿ���� �л�
    for(int lo:lost) students[lo]--;
    
    // �����ִ� �л� ü���� �߰�
    for(int re:reserve) students[re]++;
    
    // ���� �ִ� �л��� ü���� ì���ֱ�
    for(int i=1; i<=n; i++) {
        // ù ��°�� �����ʸ� �� �� ���� 
        if(i==1) {
            if(students[i] >=2 && students[i+1] == 0) {
                students[i]--;
                students[i+1]++;
            }
        }
        // �������� ���ʸ� �� �� ���� 
        else if(i==n) {
            if(students[i] >=2 && students[i-1] == 0) {
                students[i]--;
                students[i-1]++;
            }
        }
        // ���̿� ������ ����, ������ �� �� ����
        // (������ ���� �ָ� �������.. ��?)
        else {
            // ���� �л� ü���� ������ ü���� ��
            if(students[i] >=2 && students[i-1] == 0)  {
                students[i]--;
                students[i-1]++;
            }
            
            // ������ �л� ü���� ������ ü���� ��
            if(students[i] >=2 && students[i+1] == 0)  {
                students[i]--;
                students[i+1]++;
            }
        }
    }
    
    // �л� �� ����
    for(int i=1; i<=n; i++) {
        if(students[i]>0) cnt++;
    }
    
    return cnt;
}
