#include <stdio.h>

int main() {
	int max;
	scanf("%d", &max);
	
	while(1) {
		int ten = max / 10;
		int one = max % 10;
		
		if(ten + one == 7) printf("%d\n", max);
		else if(ten + one == 3) break;
		
		max--;
	}
	
	return 0;
}
