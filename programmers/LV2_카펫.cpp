#include <string>
#include <vector>
using namespace std;

vector<int> solution(int brown, int red) {
    vector<int> answer;
    int sum = brown + red;
    
    for(int height=3; height<=sum; height++) {
        // 사각형 : 세로 * 가로
        
        // 세로(행)로 나누어 떨어지면
        if(sum % height == 0) {
            int width = sum / height; // 가로(열) 값 구하기
            
            // 빨간색의 넓이는 (가로-2) * (세로-2)
            // 왜냐하면 빨간색은 중앙에 있으므로 중앙 위, 아래에 값이 있고, 좌, 우에도 있음
            if((height-2) * (width-2) == red) {
                answer.push_back(width);
                answer.push_back(height);
                break;
            }
        }
    }
    return answer;
}