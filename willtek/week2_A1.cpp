#include <stdio.h>
 
unsigned int str_lenth(const char * d)
{
 	int cnt = 0;
 	while(*d++) cnt++;
	return cnt;
}

/* �� Ǯ�� 
void str_add(char * d, const char * s)
{
 	int idx = str_lenth(d);

	while(*s) {
		d[idx++] = *s;
		s++;
	}
}
*/
 
// ����� 
void str_add(char * d, const char * s)
{
 	while(*d++);		// ++ �� ���� ���߿� ����, while �� ������ d �� ������ ��ġ�� �̵� 
 	*d--;				// d-- �� �ص��� 
 	while(*d++ = *s++);	// �����ϴ� �۾� 
}
 
int main(void)
{
    char a[15] = "Willtek";
    char b[15] = " Corp.";
 
  	str_add(a, b);
 
    printf("%s\n", a);
      
    return 0;
}
