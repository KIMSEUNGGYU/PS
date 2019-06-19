#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, string> &a, const  pair<int, string> &b) {
	return a.first < b.first ? true:false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<pair<int, string> > members;
	for(int i=0; i<n; i++) {
		int age;
		string name;
		cin >> age >> name;
		members.push_back(make_pair(age, name));
	}
	
	stable_sort(members.begin(), members.end(), compare);
	
	for(int i=0; i<n; i++) {
		cout << members[i].first << " " << members[i].second << "\n";
	}
	
	return 0;
}
