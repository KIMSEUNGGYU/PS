#include <stdio.h>

int main(void)
{
	char a[11];
	scanf("%s", a);
	
	// �Է� ���� �� ��� 
	int i=0;
	/*
	while(1) {
		if(a[i] == '\0') break;
		printf("%c\n", a[i]);
		i++;
	}
	*/
	
	// ����� 
	for(i=0; a[i] != 0; i++) {
		printf("%c\n", a[i]);
	}
	
	
	return 0;
}
