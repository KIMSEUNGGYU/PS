#include <stdio.h>

// ������ ���� ����� ��ȯ�ϴ� �Լ� 
char grade(int score) {
	// ���� ó�� 
	if(score > 100 || score < 0) return 'X';
	
	int value = score / 10;
	
	// ��� �� �͵� ��.
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
