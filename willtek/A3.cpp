#include <stdio.h>

// number 와 가장 가까운 수 출력 
int near_value(float number) {
	return (int)(number+0.5f);
} 

int main() {
	float num;
	
	scanf("%f", &num);
	printf("%d", near_value(num));
	
	return 0;
}
