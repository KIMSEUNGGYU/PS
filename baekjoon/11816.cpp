#include <stdio.h>

int main() {
	int a, b;
	
	while(scanf("%d %d", &a, &b) == 2) {
		// scanf�� ���ϰ� - ���������� �Է¹��� ������ ����
		 printf("%d", a+b); 
	}
	
	return 0;
}
