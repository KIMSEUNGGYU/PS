#include <stdio.h>

// ��� 2 
int search(char alphabet) {
	return ('f'<=alphabet && alphabet <='z');
} 

// 102(f) ~ 122(z)
int main() {
	char c;
	scanf("%c", &c);

	// ��� 2 
	printf("%s", search(c) ? "YES":"NO");	
	
	// ��� 1 
//	if(102<=c && c <=122) printf("YES\n");
//	else printf("NO");
	
	return 0;
}
