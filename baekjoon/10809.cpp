#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;

	for(int i=0; i<=25; i++) {
		auto it = find(s.begin(), s.end(), char(97+i));

		if(it==s.end()) {
			cout << "-1 ";
		}
		else {
			cout << it-s.begin() << " ";
		}
	}
	
	return 0;
}

/*
// https://gist.github.com/Baekjoon/1bd4360bf97be15fb5a5

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;

    for (int i='a'; i<='z'; i++) {
        auto it = find(s.begin(), s.end(), i);
        if (it == s.end()) {
            cout << -1 << ' ';
        } else {
            cout << (it - s.begin()) << ' ';
        }
    }

    cout << '\n';
    

    return 0;
}
*/