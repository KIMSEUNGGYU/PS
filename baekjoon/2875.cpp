// k가 0이하라면, 뺄것이 없음 
// n과 m 중에서 큰 수를 점차 뺀다.
// 만약 n이 홀수라면 한번만 빼고 
// 만약 n이 짝수라면 두번 뺀다.


// 참고
// k가 1일때 N은 짝수이고 N/2>=M 인 경우라면 
// 원래라면 한번만 빼야하지만 
// "/2" 를 하기 때문에 몫은 -1할때와 -2 할때와 몫은 같기 때문에(짝수 한정)
//  편리한 로직 구성을 위해 -2 만큼뺐다. 

#include <iostream>
using namespace std;


int main() {
	int n, m, k;	
	scanf("%d %d %d", &n, &m, &k);
	int cnt = 0;
	
	while(1) {
		if(k<=0) break;
	
		printf("%d %d %d\n", n/2, m, k); 
		// 짝수 일때는 두개씩 빼기 
		// 여자 학생 수 빼야할때 
		if(n%2==0 && (n/2) >= m)  {
			k-=2;
			n-=2;
		} 
		// n이 홀수라면 하나 빼기, 뺀만큼빼기 
		else if(n%2==1) {
			n--;
			k--;
		}
		// 남자 학생 빼야할때 
		else if( (n/2) < m) {
			m--;
			k--;
		}
	}

	n/2 < m ? printf("%d\n", n/2):printf("%d\n", m);
	
	return 0;
}
