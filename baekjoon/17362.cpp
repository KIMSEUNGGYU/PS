#include <bits/stdc++.h>
using namespace std;

int main()
{
	int finger;
	cin >> finger;

	if (finger % 8 >= 1 && finger % 8 <= 5)
	{
		cout << finger % 8;
	}
	else if (finger % 8 == 6)
	{
		cout << "4\n";
	}
	else if (finger % 8 == 7)
	{
		cout << "3\n";
	}
	else if (finger % 8 == 0)
	{
		cout << "2\n";
	}

	return 0;
}