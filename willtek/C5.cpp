#include <stdio.h>

struct Student {
	int id;
	int score;
};

struct Student students[5010];		// 5001
int N;


void input(void) {
	scanf("%d", &N);
	
	for(int i=1; i<=N; i++) {
		scanf("%d", &students[i].score);
		students[i].id = i;	// id = 1 ~ N 
	}
}

void simpleSort(void) {
	struct Student temp;
	
	for(int i=1; i<=3; i++) {
		for(int j=i+1; j<=N; j++) {
			if(students[i].score < students[j].score) {
				temp = students[i];
				students[i] = students[j];
				students[j] = temp;
			}
		}
	}
}

void output(void) {
	for(int i=1; i<=3; i++) {
		printf("%d ", students[i].id);
	}
	printf("\n");
}

int main() {
	input();
	simpleSort();
	output();
	
	return 0;
}
