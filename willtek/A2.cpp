#include <stdio.h>

// ȯ�� ��� 
unsigned int exchange(unsigned int yen) {
	double exchange_rate = 10.1;
	// float ���� �ϸ� �ȵ�! 
	
	return (unsigned int) (yen * exchange_rate);
}

int main() {
	int yen; 	// ��ȭ
	scanf("%d", &yen);
	
	printf("%d\n", exchange(yen));
	
	return 0;
}
