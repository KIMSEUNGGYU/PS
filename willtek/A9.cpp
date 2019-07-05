#include <stdio.h>
//#include <stdbool.h> 

int f1(int num)
{ 
	// 规过 2 
	return (4<=num && num <=10);
	
	// 规过 1  
//	bool flag = false;
//	int i;
//	for(i=4; i<=10; i++) {
//		if(num == i) flag = true;
//	}
//
//	return flag;
}

void main(void)
{
    int num;
    scanf("%d", &num);
    printf("%s", (f1(num) ? "YES" : "NO"));
}
