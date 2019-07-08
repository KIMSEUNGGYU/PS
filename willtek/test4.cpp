#include <stdio.h>

int main() {
	int out, in;
	int sum = 0;
	
	// 최소값 -40000 
	int max = -40100;
	// 각 역당 승객원 처리(out, in) 및 최대값 찾기
	for(int i=0; i<4; i++) {
		scanf("%d %d", &out, &in);
		
		sum -= out;
		sum += in;
		
		if(max < sum ) max = sum;
	}
	
	printf("%d\n", max);
	
	return 0;
}
