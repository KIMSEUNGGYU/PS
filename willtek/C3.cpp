#include <stdio.h>

int main() {
	 int a[4][5] = { { 3, -5, 12, 3, -21 },{ -2, 11, 2, -7, -11 }, { 21, -21, -35, -93, -11 },{ 9, 14, 39, -98, -1 } };
	
	int i, j;
	
	// ��, �� �ε��� 
	int row = 0;
	int col = 0;
	
	// ��, �� �ִ밪 
	int max_col = -1000000;
	int max_row = -1000000;
	
	// �࿡�� ���� ū �� 
	for(i=0; i<4; i++) {
		int sum_col = 0;
		for(j=0; j<5; j++) {
			sum_col += a[i][j];
		}
		
		if(max_col < sum_col) {
			max_col = sum_col;
			col = i;
		}
	}
	
	// ������ ���� ū �� 
	for(i=0; i<5; i++) {
		int sum_row = 0;

		for(j=0; j<4; j++) {
			sum_row +=a[j][i];
		}
		
		if(max_row < sum_row) {
			max_row = sum_row;
			row = i;
		}
	} 
	
	printf("%d %d\n", col+1, row+1);
}

/*
�ѹ濡 ó���ϰ��� ������
��� ���� ����� �޶� �� �� �� ����
*/
