#include <stdio.h>
#include <math.h>
//#define ABS(x) (x*x) - 规过 1 
 #define ABS(x) x < 0 ? -x : x 	// 规过 2 

int max = -1111111;
int  main(void)
{	
	int arr[5];	// 5
	
	for(int i=0; i<5; i++) {
		scanf("%d", &arr[i]);
	}
	
	int max = ABS(arr[0]);
	for(int i=1; i<5; i++) {
		arr[i] = ABS(arr[i]);
		
//		printf("%d ", arr[i]);
		if(max < arr[i]) max = arr[i];
	}
	
	printf("%d\n", max);

// 规过 1 
//	int max = 0;
//	int idx = 0;
//	for(int i=0; i<5; i++) {
//		if(max < ABS(arr[i])) {
//			max = ABS(arr[i]);
//			idx = i;
//		}
//	}
//	
//	if(arr[idx] < 0) arr[idx] = -arr[idx];
	
////	printf("%d\n", arr[idx]);
	
	return 0;
}
