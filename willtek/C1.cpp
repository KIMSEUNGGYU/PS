#include <stdio.h>

int main() {
	char s[30];
	scanf("%s", s);
	
	int arr[26] = {0, };	// 알파벳 저장 공간
	 
	// 중복된 알파벳 갯수 파악 
	int i=0;
	
	
	/* 강사님 
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
	
	// 가장 많이 중복된 횟수 찾기 
	int max = -1;
	for(int i=0; i<26; i++) {
		if(max < arr[i]) max = arr[i];
	}
	
	// 가장 많이 중복된 것 + 아스키 코드가 빠른 거 출력 
	for(int i=0; i<26; i++) {
		if(max == arr[i]) {
			printf("%c", 'a'+i);
			break;
		}
	}
	
	return 0;
}
