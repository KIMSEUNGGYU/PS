#include <stdio.h>

int main() {
	char s[30];
	scanf("%s", s);
	
	int arr[26] = {0, };	// ���ĺ� ���� ����
	 
	// �ߺ��� ���ĺ� ���� �ľ� 
	int i=0;
	
	
	/* ����� 
	for(i=0; s[i] > 0; i++) {
		if(s[i] >= 'a' && s[i] <='z') {
			arr[s[i]-'a']++;
		}
	} 
	
	int maxi = 0;
	for(i=1; i<26; i++) {
		if(cnt[maxi] < cnt[i]) maxi = i;	
	}
	printf("%c\n", maxi+'a');
	*/
	
	while(1) {
		if(s[i] == '\0') break;
		
		if('a'<= s[i] && s[i] <= 'z') {
			arr[s[i]-'a']++;
		}
		i++;
	}
	
	// ���� ���� �ߺ��� Ƚ�� ã�� 
	int max = -1;
	for(int i=0; i<26; i++) {
		if(max < arr[i]) max = arr[i];
	}
	
	// ���� ���� �ߺ��� �� + �ƽ�Ű �ڵ尡 ���� �� ��� 
	for(int i=0; i<26; i++) {
		if(max == arr[i]) {
			printf("%c", 'a'+i);
			break;
		}
	}
	
	return 0;
}
