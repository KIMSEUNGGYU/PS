#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string inp;
	cin >> inp;
	
	vector<string> correct = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	
	// ���ڿ��� ���鼭  
	for(int k=0; k<inp.length(); k++) {
		
		// ���ϴ� ���ڿ� ���Ѵ�.  
		for(int i=0; i<correct.size(); i++) {
			int size = correct[i].length();
			
			// ���� ���ڿ��� ���ϴ� ���ڿ��� ���� ���
			// replace �� �̿��� * (�ѱ���)�� ��ȯ�Ѵ�. 
			if(inp.substr(k, size) == correct[i].substr(0, size)) {
				inp.replace(k, size, "*");
			}
		}
	}
	
	// ���ϴ� ���ڰ� 2���� �Ǵ� 3�����̰� 
	// ���ϴ� ���ڰ� ���� ��쿡�� �ѱ��ڸ� ��ü�Ѵ�.
	// ������ ���ϴ� ���ڰ� ���� ��쿡�� �׳� ���� �����̰� ���ϴ� ���ڿ� ��ġ�ϸ� �ѱ��ڷ� ������� ������ 
	// ���ڿ��� ���̸� ����ϸ� �ȴ�. 
	cout << inp.length() << "\n";
	
	return 0;
}
