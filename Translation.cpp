#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


typedef long long ll;
typedef unsigned int ui;


int main() {
	string s, t;

	cin >> s >> t;
	bool flag = true;

	for (int i = 0; i < s.size(); i++)
		if (s[i] != t[s.size() - i - 1])
		{
			flag = false;
			break;
		}

	cout << (flag ? "YES" : "NO");
	
	return 0;
}