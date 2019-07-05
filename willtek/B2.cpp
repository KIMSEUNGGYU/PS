#include <stdio.h>

void Draw_Star(int size) {
	for(int i=0; i<size; i++) {
		for(int j=0; j<size; j++) {
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	int size;
	scanf("%d", &size);
	
	Draw_Star(size);
}
