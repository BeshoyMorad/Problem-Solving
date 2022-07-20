#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


typedef long long ll;
typedef unsigned int ui;


int main() {
	string s, newS;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
		if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
			continue;
		else {
			//add '.' before the char
			newS += '.';
			newS += s[i];
		}
	}
	cout << newS;

	return 0;
}