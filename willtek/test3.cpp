#include <stdio.h>
 
int main(void)
{
  	// 여기서부터 작성
 	
	int arr[9];
	
	for(int i=0; i<9; i++) {
		scanf("%d", &arr[i]);
	}
	
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
