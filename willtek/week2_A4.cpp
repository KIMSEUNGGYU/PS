 // ���� �����ʹ� ���� �������� ���� �����ϰ�, �ּҰ��� ������ �� ���� (���� �������� �ε����� ����?) 
 
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
