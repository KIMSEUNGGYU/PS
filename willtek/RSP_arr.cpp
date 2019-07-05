#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 0 가위
// 1 바위
// 2 보 
	
// 0 비김
// 1 짐
// 2 이김	 
int arr[3] = {0, 1, 2};
// char msg1[3][5] = {"가위", "바위", "보"};
// char msg2[3][5] = {"패배", "승리", "비김"};
 
int result[3][3] = 	{
						{0, 1, 2},
						{2, 0, 1},
						{1, 2, 0}
					};

// num 에 해당하는 가위 바위 보 출력 
char* RSP(int num) {
	if(num == 0) return "가위";
	else if(num == 1) return "바위"; 
	else if(num == 2) return "보"; 
}


int main() {
	printf("가위(0), 바위(1), 보(2)를 입력하시오.\n");
	while(1) {
		int user;
		scanf("%d", &user);	
		
		if(!(user == 0 || user == 1 || user == 2)) break; 
////	// if(user < 0 || user > 2) break; 
		srand((unsigned int) time(NULL));	// 매번 할때마다 다른 값을 내기 위해 (시간 데이터를 활용) 
		unsigned int random = rand() % 3;
	
		printf("YOU = %s PC = %s\n", RSP(user), RSP(random));

		if(result[user][random] == 0) printf("비김\n");
		else if(result[user][random] == 1) printf("짐\n");
		else if(result[user][random] == 2) printf("이김\n");
	}
	
	return 0;
} 
