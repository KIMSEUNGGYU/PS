#include <stdio.h>

int main() {
	int out, in;
	int sum = 0;
	
	int max = -40100;
	for(int i=0; i<4; i++) {
		scanf("%d %d", &out, &in);
		
		sum -= out;
		sum += in;
		
		if(max < sum ) max = sum;
	}
	
	printf("%d\n", max);
	
	return 0;
}
