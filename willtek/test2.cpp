#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int sum = 0;
	for(int i=1; i<=n; i++) {
		int mul = 1;
		for(int j=1; j<=i; j++) {
			mul *= j;
		}
		
		sum += mul;
	}
	
	printf("%d\n", sum);
	
	return 0;
}
