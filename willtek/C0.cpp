#include <stdio.h>

// lookup ���̺� : 

 
//char arr[11] = {'F',' F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
char lookcup[] = "FFFFFFDCBAA";
	
// �־��� ���� �´� ���� ��ȯ 
char grade(int number) {
	if(number < 0 || number > 100) return 'X';
	
	return arr[number / 10];
	
	//
	
//	int value = number / 10;
//	// ���� ���ϱ� 
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
