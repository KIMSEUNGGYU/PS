#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<string> a(n);
    
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), [](string u, string v) {
        if (u.size() == v.size()) {
            return u < v;
        } else {
            return u.size() < v.size();
        }
    });

    a.erase(unique(a.begin(), a.end()), a.end());

    for (string s : a) {
        cout << s << '\n';
    }
    
    return 0;
}