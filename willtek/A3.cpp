#include <stdio.h>

// number �� ���� ����� �� ��� 
int near_value(float number) {
	return (int)(number+0.5f);
} 

int main() {
	float num;
	
	scanf("%f", &num);
	printf("%d", near_value(num));
	
	return 0;
}
