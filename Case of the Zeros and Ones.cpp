#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


typedef long long ll;
typedef unsigned int ui;


int main() {

	int n;
	string s;
	cin >> n >> s;

	int ones = 0, zeros = 0;
	for (int i = 0; i < n; i++)
		if (s[i] == '1')
			ones++;
		else 
			zeros++;
	
	cout << abs(zeros - ones);

	return 0;
}