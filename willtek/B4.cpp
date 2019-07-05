#include <stdio.h>

void Draw_Star3(int size) {
	for(int i=1; i<=size; i++) {
		// " " 출력 부분 
		for(int j=1; j<=size-i; j++) {
			printf(" ");
		}
		
		// * 출력 부분
		for(int j=1; j<=i*2-1; j++) {
			printf("*");
		} 
		
		printf("\n");
	}
}

int main() {
	int size;
	scanf("%d", &size);
	
	Draw_Star3(size);
	return 0;
}
