#include <stdio.h>
 
unsigned int str_lenth(const char * d)
{
 	int cnt = 0;
 	while(*d++) cnt++;
	return cnt;
}

/* 내 풀이 
void str_add(char * d, const char * s)
{
 	int idx = str_lenth(d);

	while(*s) {
		d[idx++] = *s;
		s++;
	}
}
*/
 
// 강사님 
void str_add(char * d, const char * s)
{
 	while(*d++);		// ++ 이 가장 나중에 증가, while 문 끝나면 d 의 마지막 위치로 이동 
 	*d--;				// d-- 로 해도됨 
 	while(*d++ = *s++);	// 복사하는 작업 
}
 
int main(void)
{
    char a[15] = "Willtek";
    char b[15] = " Corp.";
 
  	str_add(a, b);
 
    printf("%s\n", a);
      
    return 0;
}
