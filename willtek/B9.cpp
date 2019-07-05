#include <stdio.h>

int main(void)
{
	int a[10] = {3, 4, -10, 59, 32, 48, 22, 77, -99, 9};
	int i;
	
	// 가장 큰 값 찾기 
	int max = a[0];
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
		if (max < a[i]) max = a[i];
	}
	printf("\nMAX = %d\n", max);

	return 0;
}
