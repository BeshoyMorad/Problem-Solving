#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


typedef long long ll;
typedef unsigned int ui;


int main() {
	int n;
	cin >> n;
	string s;
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == "++X")
			++x;
		else if (s == "X++")
			x++;
		else if (s == "X--")
			x--;
		else --x;
	}

	cout << x;
	return 0;
}