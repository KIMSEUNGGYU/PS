#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int arr[3] = {0, 1, 2};
	
	
	while(1) {
		int user;
		scanf("%d", &user);	
		
		srand((unsigned int) time(NULL));
		unsigned int random = rand() % 3;
		
		switch(user) {
			// ������ ������� 
			case 0:
				printf("You = ���� ");
				if(random == 0) printf("PC = ����\n���\n"); 
				else if(random == 1) printf("PC = ����\n�й�\n");
				else if(random == 2) printf("PC = ��\n�¸�\n");
				break;
			// ������ ������� 
			case 1:
				printf("You = ���� ");
				if(random == 0) printf("PC = ����\n�¸�\n"); 
				else if(random == 1) printf("PC = ����\n���\n");
				else if(random == 2) printf("PC = ��\n�й�\n");
				break;
			// ������ ����� 
			case 2:
				printf("You = �� ");
				if(random == 0) printf("PC = ����\n�й�\n"); 
				else if(random == 1) printf("PC = ����\n�¸�\n");
				else if(random == 2) printf("PC = ��\n���\n");
				break;
			default:
				return 0; 
		}
	}
} 
