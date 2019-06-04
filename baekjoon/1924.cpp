#include <iostream>
#include <string>
using namespace std;

int main() {
	int m, d;
	string day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sum = 0; 	// 총 일수 

	// 입력 - 월, 일
	cin >> m >> d;

	// 1월이면 그냥 d값으로 값처리 
	// 2~12월은 m-1까지 days값 + d;
	if(2<=m && m<=12) {
		for(int i=0;i<m-1; i++) {
			sum+=days[i];
		}
	}

	// 빼기 1을 하는 이유
	// 요일과 인덱스를 맞추기 위해! -> 배열은 0부터 접근
	sum+=d-1;
	cout << day[(sum%7)] << "\n"; 
	return 0;
}