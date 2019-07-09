#include <stdio.h>

unsigned int str_lenth(const char * d)
{
 	int cnt = 0;
 	while(*d++) cnt++;
	return cnt;
}

/* �� �ڵ� 
int str_comp(const char *a, const char *b)
{
 	unsigned int aSize = str_lenth(a);
 	unsigned int bSize = str_lenth(b);
 	
 	// ���ڿ� ũ�Ⱑ ���� ��� 
 	if(aSize == bSize) {
 		for(int i=0; i<aSize; i++) {
 			if(a[i] != b[i]) {
 				if(a[i] > b[i] ) return 1;
 				else return -1;
			}
		}
		
		// ���� ������ ������Ű�� ������ ���� ���� 
		return 0;
	}
	// ���ڿ� ũ�Ⱑ �ٸ� ��� 
	else {
		int max;
		// ũ�Ⱑ ū �ɷ� �� ���� 
		if(aSize < bSize) max = bSize;
		else max = aSize;
		
		for(int i=0; i<max; i++) {
			if(a[i] > b[i]) return 1;
			else if(a[i] < b[i]) return -1;
		}
	}
}
*/

// ����� 
int str_comp(const char *a, const char *b)
{
 	do {
 		if(*a < *b) return -1;
 		if(*a > *b) return 1;
 		b++;
	} while (*a++);
	// a b �� ������Ű�鼭 ������ �� �� ����
	// �׷��� ������ ���ǿ� ���� -1,  1 ��ȯ 
	
	return 0; 
}

int main(void)
{
      printf("%d\n", str_comp("ABC", "BC"));	// -1
      printf("%d\n", str_comp("ABC", "AC"));	// -1
      printf("%d\n", str_comp("ABC", "AB"));	// 1
      printf("%d\n", str_comp("abc", "ABC"));	// 1
      printf("%d\n", str_comp("ab", " "));		// 1
      printf("%d\n", str_comp("A", "AB"));		// -1
      
      return 0;
}
