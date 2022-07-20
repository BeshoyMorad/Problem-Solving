#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


typedef long long ll;
typedef unsigned int ui;


int main() {
	string s;
	cin >> s;
	if (int(s[0]) > 96)
		s[0] += 'A' - 'a';
	
	cout << s;
	return 0;
}