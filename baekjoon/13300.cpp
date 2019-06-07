#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;					// 학생 수, 방의 수용인원
	int students[7][2] = {0, }; 	// 학년 , 성별 0 -> 여자, 1->남자  
	 
	
	for(int i=0; i<n; i++) {
		int s, y;			// s= 성별, y= 학년 
		cin >> s >> y;
		
		students[y-1][s]++;	// 학년, 성별 
	} 
	
	int cnt = 0;		// 방의 갯수 
	
	// 각 경우 처리 
	// 1학년 ~ 6학년 까지 반복 
	for(int i=0; i<6; i++) {
		// 남자 여자 반복 
		for(int j=0; j<2; j++) {
			// 학생이 존재하지 않으면 방이 필요없음! 
			if(0 < students[i][j]) {
				// 학생 수와 수용할 수 있는 수가 나누어 떨어지면 
				// 딱 그만 큼의 방이 필요
				// ex) 학생 수=4, k=2 -> 2개의 방필요 
				if(students[i][j] % k == 0) {
					cnt += students[i][j]/k;
				}
				// 학생 수와 수영할 수 있는 수가 나누어 떨어지지 않으면
				// 나눈 값 +1 개의 방 필요
				// ex) 학생 수=5, k=2 -> 2+1 개의 방 필요 
				else {
					cnt += (students[i][j]/k) +1;
				}
				
			}
		}
	}
	
	cout << cnt << "\n";

	return 0;
}
