#include <stdio.h>

// id 의 나머지 값으로 조를 만듦 
int make_team(int id) {
	// 나머지 연산은 0부터 우리는 1조 부터 시작 
	return (id % 4) + 1;
}

int main() {
	int id;
	scanf("%d", &id);
	
	printf("%d\n", make_team(id));

	return 0;
}
