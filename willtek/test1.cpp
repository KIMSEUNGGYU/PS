#include <stdio.h>
 
// ���⼭���� �ۼ�
char Change_Case(char a) {
	if('a' <= a && a<='z') return a-32;
	else if('A' <= a && a <='Z') return a+32;
}
 
int main(void)
{
    char a;
    scanf("%c", &a);
    printf("%c",Change_Case(a));
    return 0;
} 

