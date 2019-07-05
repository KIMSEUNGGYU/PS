#include <stdio.h>

// 환율 계산 
unsigned int exchange(unsigned int yen) {
	double exchange_rate = 10.1;
	// float 으로 하면 안됨! - 반올림에서 문제가 생김 
	
	return (unsigned int) (yen * exchange_rate);
}

int main() {
	int yen; 	// 엔화
	scanf("%d", &yen);
	
	printf("%d\n", exchange(yen));
	
	return 0;
}
