#include <stdio.h>

int main(void)
{
	char a[11];
	scanf("%s", a);
	
	// 입력 받은 값 출력 
	int i=0;
	/*
	while(1) {
		if(a[i] == '\0') break;
		printf("%c\n", a[i]);
		i++;
	}
	*/
	
	// 강사님 
	for(i=0; a[i] != 0; i++) {
		printf("%c\n", a[i]);
	}
	
	
	return 0;
}
