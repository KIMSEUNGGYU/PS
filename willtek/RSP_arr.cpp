#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 0 ����
// 1 ����
// 2 �� 
	
// 0 ���
// 1 ��
// 2 �̱�	 
int arr[3] = {0, 1, 2};
// char msg1[3][5] = {"����", "����", "��"};
// char msg2[3][5] = {"�й�", "�¸�", "���"};
 
int result[3][3] = 	{
						{0, 1, 2},
						{2, 0, 1},
						{1, 2, 0}
					};

// num �� �ش��ϴ� ���� ���� �� ��� 
char* RSP(int num) {
	if(num == 0) return "����";
	else if(num == 1) return "����"; 
	else if(num == 2) return "��"; 
}


int main() {
	printf("����(0), ����(1), ��(2)�� �Է��Ͻÿ�.\n");
	while(1) {
		int user;
		scanf("%d", &user);	
		
		if(!(user == 0 || user == 1 || user == 2)) break; 
////	// if(user < 0 || user > 2) break; 
		srand((unsigned int) time(NULL));	// �Ź� �Ҷ����� �ٸ� ���� ���� ���� (�ð� �����͸� Ȱ��) 
		unsigned int random = rand() % 3;
	
		printf("YOU = %s PC = %s\n", RSP(user), RSP(random));

		if(result[user][random] == 0) printf("���\n");
		else if(result[user][random] == 1) printf("��\n");
		else if(result[user][random] == 2) printf("�̱�\n");
	}
	
	return 0;
} 
