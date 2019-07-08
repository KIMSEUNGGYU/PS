#include <stdio.h>

int main() {
	int arr[101][101];
	
	int n;
	scanf("%d", &n);
	
	// n 행 부터 한 줄씩 줄이면서 (n ~ 1) 배열에 alphabet 값 넣기
	// alphabet 이 'Z'를 넣어가면 alphabet을 'A' 로 치환
	char alpha = 'A';
	for(int i=n; i>0; i--) {
		for(int j=n; j>0; j--) {
			arr[j][i] = alpha++;
			
			if(alpha > 'Z') alpha = 'A';
		}
	}
	
	// 저장된 값 출력 
	// 배열에 저장할때 0부터가 아닌 1부터 n까지 접근 
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
