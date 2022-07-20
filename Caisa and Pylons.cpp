#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;


int main() {
	FIO;

	int n;
	cin >> n;
	vector<int> heights(n);
	for (int i = 0; i < n; i++)
		cin >> heights[i];

	ll heal = 0;
	ll need = heights[0];

	

	for (int i = 0; i < n - 1; i++)
	{
		int energy = heights[i] - heights[i + 1];

		heal += energy;
		if (heal < 0)
		{
			//use the heal and buy the needed height
			need += abs(heal);
			heal = 0;
		}
	}

	cout << need;

	return 0;
}