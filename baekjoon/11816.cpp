#include <stdio.h>

int main() {
	int a, b;
	
	while(scanf("%d %d", &a, &b) == 2) {
		// scanf의 리턴값 - 성공적으로 입력받은 인자의 갯수
		 printf("%d", a+b); 
	}
	
	return 0;
}
