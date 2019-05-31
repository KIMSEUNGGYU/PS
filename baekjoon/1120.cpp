/*
문자열 A와 문자열 B가 얼만큼 겹치는지 구하는 문제
단, 그 경우가 가장 작은 값

A와 B의 문자열 길이 차이만큼 반복해서 그 경우가 가장 작은 값 반환

*/

#include <iostream>
#include <string>
using namespace std;	
int main() {
	int cnt = 0;	// 각 경우 다른 문자 수
	int min = 55;	// 문자열 최대길이 50 이므로 그것보다는 커야함
	string A, B;	// 입력 변수
	cin >> A >> B;

	int difference = B.length() - A.length();	// 문자열 크기들의 차이

	// 차이 만큼 반복
	for(int i=0; i<=difference; i++) {
		cnt = 0;
		// 겹치는지 확인
		for(int j=0; j<A.length(); j++) {
			if(B[j+i] != A[j]) cnt++;
		}

		if(min > cnt) min = cnt;
	}

	printf("%d\n", min);

	return 0;
}