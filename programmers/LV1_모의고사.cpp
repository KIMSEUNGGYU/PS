#include <bits/stdc++.h>

// �� ������ ��� ���� ���� 
vector<int> supo1 = {1, 2, 3, 4, 5};
vector<int> supo2 = {2, 1, 2, 3, 2, 4, 2, 5};
vector<int> supo3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    
    vector<int> answer;         // ������ ������ ����
    vector<int> score(4);       // �� �����ڰ� �� � �´��� ��� 
                                // 1, 2, 3���� �����ϱ� ���� �� 4���� �����Ҵ�
    
    // �� �������� ������ �� ��� �Ǿ��ִ��� (�Ŀ� �ݺ��Ҷ� mod�� 1, 2, ... ��, 1, 2, ..)
    int supo1Mod = supo1.size();    
    int supo2Mod = supo2.size();
    int supo3Mod = supo3.size();

    // �� ������ �����ڰ� � �¾Ҵ��� ó��
    for(int i=0; i<answers.size(); i++) {
        if(answers[i] == supo1[i%supo1Mod]) score[1]++;
        if(answers[i] == supo2[i%supo2Mod]) score[2]++;
        if(answers[i] == supo3[i%supo3Mod]) score[3]++;
    }
    
    // �ִ밪 ã��
    int M = max(score[1], max(score[2], score[3]));
    
    // ���� ���� �´� ��� ã�� �� �ߺ��� ��� ������������ ����
    for(int i=1; i<score.size(); i++) {
        if(M == score[i]) answer.push_back(i+1);
    }
   
    return answer;
}
