#include <stdio.h>

int main() {
	char c;
	scanf("%c", &c);
	
	// 대문자로 출력  
	// 아스키 코드 값으로 32 차이  
	printf("%c\n", c-32);
	
	return 0;
} 
