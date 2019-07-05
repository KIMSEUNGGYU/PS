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
			// 유저가 가위라면 
			case 0:
				printf("You = 가위 ");
				if(random == 0) printf("PC = 가위\n비김\n"); 
				else if(random == 1) printf("PC = 바위\n패배\n");
				else if(random == 2) printf("PC = 보\n승리\n");
				break;
			// 유저가 바위라면 
			case 1:
				printf("You = 바위 ");
				if(random == 0) printf("PC = 가위\n승리\n"); 
				else if(random == 1) printf("PC = 바위\n비김\n");
				else if(random == 2) printf("PC = 보\n패배\n");
				break;
			// 유저가 보라면 
			case 2:
				printf("You = 보 ");
				if(random == 0) printf("PC = 가위\n패배\n"); 
				else if(random == 1) printf("PC = 바위\n승리\n");
				else if(random == 2) printf("PC = 보\n비김\n");
				break;
			default:
				return 0; 
		}
	}
} 
