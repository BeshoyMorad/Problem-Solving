#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


typedef long long ll;
typedef unsigned int ui;


int main() {
	int n, input, x = 0, y = 0, z = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
		{
			cin >> input;
			if (j == 0)
				x += input;
			else if (j == 1)
				y += input;
			else
				z += input;
		}

	if (x == 0 && y == 0 && z == 0)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}