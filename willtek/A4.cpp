#include <stdio.h>

// id �� ������ ������ ���� ���� 
int make_team(int id) {
	// ������ ������ 0���� �츮�� 1�� ���� ���� 
	return (id % 4) + 1;
}

int main() {
	int id;
	scanf("%d", &id);
	
	printf("%d\n", make_team(id));

	return 0;
}
