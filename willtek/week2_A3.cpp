#include <stdio.h>

 
void Swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}
 
int main(void )
{
      int a=10, b=20;
 
      printf("Before : %d %d\n", a, b );
      Swap(&a, &b);
      printf("After : %d %d\n", a, b );
      
      return 0;
}
