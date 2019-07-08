#include <stdio.h>
 
int main(void)
{

	int arr[9];
	for(int i=0; i<9; i++) {
		scanf("%d", &arr[i]);
	}
	
	// 제일 큰 값, 인데스 찾기
	int max = arr[0];
	int idx = 0;
	for(int i=1; i<9; i++) {
		if(max < arr[i]) {
			max = arr[i];
			idx = i;		
		}	
	}
	
	printf("%d\n%d\n", max, idx+1);
	return 0;
}
