#include <stdio.h>

unsigned int str_lenth(const char * d)
{
 	int cnt = 0;
 	while(*d++) cnt++;
	return cnt;
}

/* 내 코드 
int str_comp(const char *a, const char *b)
{
 	unsigned int aSize = str_lenth(a);
 	unsigned int bSize = str_lenth(b);
 	
 	// 문자열 크기가 같은 경우 
 	if(aSize == bSize) {
 		for(int i=0; i<aSize; i++) {
 			if(a[i] != b[i]) {
 				if(a[i] > b[i] ) return 1;
 				else return -1;
			}
		}
		
		// 위의 조건을 충족시키지 않으면 같은 문자 
		return 0;
	}
	// 문자열 크기가 다른 경우 
	else {
		int max;
		// 크기가 큰 걸로 비교 수행 
		if(aSize < bSize) max = bSize;
		else max = aSize;
		
		for(int i=0; i<max; i++) {
			if(a[i] > b[i]) return 1;
			else if(a[i] < b[i]) return -1;
		}
	}
}
*/

// 강사님 
int str_comp(const char *a, const char *b)
{
 	do {
 		if(*a < *b) return -1;
 		if(*a > *b) return 1;
 		b++;
	} while (*a++);
	// a b 를 증가시키면서 같으면 둘 다 증가
	// 그렇지 않으면 조건에 따라 -1,  1 반환 
	
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
