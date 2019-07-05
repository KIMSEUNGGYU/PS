#include <stdio.h>

// 점수에 따른 등급을 반환하는 함수 
char grade(int score) {
	// 예외 처리 
	if(score > 100 || score < 0) return 'X';
	
	int value = score / 10;
	
	// 상수 식 와도 됨.
	// score / 10 
	switch(value) { 
		case 10:
		case 9:
			return 'A';
		case 8:
			return 'B';
		case 7:
			return 'C';
		case 6:
			return 'D';
		default:
			return 'F';		
	}
}

int main() {
	int score;
	scanf("%d", &score);
	
	printf("%c", grade(score));
	return 0;
}
