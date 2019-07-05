#include <stdio.h>

// 规过 2 
int search(char alphabet) {
	return ('f'<=alphabet && alphabet <='z');
} 

// 102(f) ~ 122(z)
int main() {
	char c;
	scanf("%c", &c);

	// 规过 2 
	printf("%s", search(c) ? "YES":"NO");	
	
	// 规过 1 
//	if(102<=c && c <=122) printf("YES\n");
//	else printf("NO");
	
	return 0;
}
