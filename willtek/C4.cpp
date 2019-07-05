#include <stdio.h>

int data[] = {2, 1, 9, 7, -3, 2, 6, 4, 3, 8};

void printArray(int N) {
	for(int i=0; i<N; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
}

// ���� ���� - �ּҰ��� �����ؼ� ���� 
void selectSort(int N) {
	for(int i=0; i<N-1; i++) {
		// �ּҰ� ã�� 
		int min = data[i];
		int min_idx = i;
		for(int j=i+1; j<N; j++) {
			if(min > data[j]) {
				min = data[j];
				min_idx = j;
			}
		}
		
		// swap
		int temp = data[i];
		data[i] = data[min_idx];
		data[min_idx] = temp;
	}
}
 
// ���غ��� ������ ������ swap 
void simpleSort(int N)
{
	for(int i=0; i<N-1; i++) {
		// �ּҰ� ã�� 
		for(int j=i+1; j<N; j++) {
			if(data[i] > data[j]) {
				// swap
				int temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}


int main() {
	int N = sizeof(data) / sizeof(data[0]);
	
	printArray(N);
	simpleSort(N);
	printArray(N);
	
	return 0;
} 
