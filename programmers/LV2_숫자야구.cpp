#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> baseball) {
    int answer = 0;     // 정답 갯수
    int x, y, z;        // 검사할 수 변수(백, 십, 일의 자리)
    int a, b, c;        // 예측할 수 변수(백, 십, 일의 자리)
    
    int strike_cnt = 0; // 각 경우당 strike 갯수
    int ball_cnt = 0;   // 각 경우당 ball 갯수
    int check = 0;      // 예측한 수와 주어진 수가 일치하는 갯수 저장(모두 일치하면 정답이 될 수 있는 수)
    
    for(int i=100; i<=999; i++) {
        check = 0;      // 각 경우당 비교해야하므로 0으로 초기화
        
        // 검사할 수자를 분리(백, 십, 일의 자리로)
        x = i / 100;
        y = i % 100 / 10;
        z = i % 10;
        
        // 각각 서로 다른 수이고 1~9 의 수이면 비교 시작
        if(x!=y && y!=z && z!=x && x!=0 && y !=0 && z!=0) {
            // 예측할 수와 맞는지 비교
            for(int j=0; j<baseball.size(); j++) {
                strike_cnt = 0;
                ball_cnt = 0;
                
                // 예측할 수 분리
                a = baseball[j][0] / 100;
                b = baseball[j][0] % 100 / 10;
                c = baseball[j][0] % 10;
                
                // 백의 자리와 같은값이 있는지
                if(x==a) strike_cnt++;
                else if(x==b || x==c) ball_cnt++;
                
                // 십의 자리와 같은 값이 있는지
                if(y==b) strike_cnt++;
                else if(y==a || y==c) ball_cnt++;
                
                // 일의 자리와 같은 값이 있는지
                if(z==c) strike_cnt++;
                else if(z==a || z==b) ball_cnt++;
                
                // 각 경우와 스트라이드 수와 볼의 수가 같은지 확인
                if(strike_cnt == baseball[j][1] && ball_cnt == baseball[j][2]) check++;
            } 
            
            // 모두 일치하면 정답 +1
            if(check == baseball.size()) answer++;
        }
    }
    
    return answer;
}