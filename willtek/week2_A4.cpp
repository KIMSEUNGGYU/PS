 // 이중 포인터는 단일 포인터의 값에 접근하고, 주소값도 변경할 수 있음 (원본 데이터의 인덱스를 변경?) 
 
 #include <stdio.h>
 
int func(const int **p)
{
    int i;
  	int sum = 0;
 
    printf("=========%d\n", (*p)[0]);
    
    for(i=1; i<=(*p)[0]; i++) {
    	sum += (*p)[i];
	}
	
	*p += i;
    
    return sum;
}
 
int main(void)
{
      int i;
      int a[] = {1, 10, 2, -5, -20, 3, 100, 200, 300, 4, -10, -20, -30, -40};
      const int *p = a;
 
      for(i=0; i<4; i++)
      {
            printf("SUM=%d\n", func(&p));
      }
      
      return 0;
}
