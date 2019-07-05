#include <stdio.h>
int compare(int num)
{ 
	if(num % 2 == 0) return 2;
	else if(num % 3 == 0) return 3;
	else if(num % 5 == 0) return 5;
	else return 0;
}

int main(void)
{
    printf("3 => %d\n", compare(3));
    printf("62 => %d\n", compare(62));
    printf("25 => %d\n", compare(25));
    printf("157 => %d\n", compare(157));
    
    return 0;
}
