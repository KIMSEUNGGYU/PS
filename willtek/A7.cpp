#include <stdio.h>
int Check_Odd_Even(int num)
{
	return num % 2;
}

void main(void)
{
        printf("3 => %d\n", Check_Odd_Even(3));
        printf("62 => %d\n", Check_Odd_Even(62));
        printf("157 => %d\n", Check_Odd_Even(157));
}
