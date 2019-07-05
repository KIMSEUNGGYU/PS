#include <stdio.h>

// lookup 테이블 : 

 
//char arr[11] = {'F',' F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
char lookcup[] = "FFFFFFDCBAA";
	
// 주어진 수에 맞는 학점 반환 
char grade(int number) {
	if(number < 0 || number > 100) return 'X';
	
	return arr[number / 10];
	
	//
	
//	int value = number / 10;
//	// 학점 정하기 
//	switch(value) {
//		case 10:
//		case 9:
//			return arr[value];
//		case 8:
//			return arr[value];
//		case 7:
//			return arr[value];
//		case 6:
//			return arr[value];
//		default:
//			return arr[value];
//	}
}

int main(void)
{
	int number;
	scanf("%d", &number);
	
	printf("%c", grade(number));
	
	return 0;
}
