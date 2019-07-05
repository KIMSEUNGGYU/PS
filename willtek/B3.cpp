#include <stdio.h>

void Draw_Star2(int size) {
	for(int i=size; i>0; i--) {
		for(int j=0; j<i; j++) {
			printf("*");
		}
		printf("\n");
	}	
}

int main() 
{
	int size;
	scanf("%d", &size);
	
	Draw_Star2(size);
}
