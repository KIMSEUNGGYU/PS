#include <stdio.h>
 
// 대문자는 소문자로, 소문자는 대문자로 반환
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

