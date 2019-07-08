#include <stdio.h>

int main() {
	
	int arr[101][101];
	
	int n;
	scanf("%d", &n);
	
	char alpha = 'A';
	
	for(int i=n; i>0; i--) {
		for(int j=n; j>0; j--) {
			arr[j][i] = alpha++;
			
			if(alpha > 'Z') alpha = 'A';
		}
	}
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
