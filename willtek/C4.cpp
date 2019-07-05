#include <stdio.h>

int data[] = {2, 1, 9, 7, -3, 2, 6, 4, 3, 8};

void printArray(int N) {
	for(int i=0; i<N; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
}

// 선택 정렬 - 최소값을 선택해서 정렬 
void selectSort(int N) {
	for(int i=0; i<N-1; i++) {
		// 최소값 찾기 
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
 
// 기준보다 작으면 무조건 swap 
void simpleSort(int N)
{
	for(int i=0; i<N-1; i++) {
		// 최소값 찾기 
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
