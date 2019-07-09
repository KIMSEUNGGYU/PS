#include <stdio.h>
 
unsigned int str_lenth(const char * d)
{
 	int cnt = 0;
 	
 	while(*d) {
 		d++;
  		cnt++;
	}
 
	return cnt;
}

/* °­»ç´Ô
unsigned int str_lenth(const char * d)
{
 	int cnt = 0;
 	while(*d++) cnt++;
	return cnt;
}
*/

 
int main(void)
{
      char a[ ] = "Willtek";
 
      printf("%d\n", sizeof(a));
      printf("%d\n", str_lenth(a));

	return 0;
}
