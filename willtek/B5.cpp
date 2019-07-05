#include <stdio.h>

int main() {
	int number;
	
	scanf("%d", &number);
	
	int cnt = 0;
	while(1) {
		if(number / 10 != 0) {
			number /= 10;
			cnt++;
		}
		else break;
	}
	
	printf("%d\n", cnt+1);
	
	return 0;
}
