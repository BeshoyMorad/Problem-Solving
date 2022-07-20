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
	// distance between i and j is abs(i - j)
	// at most one criminal in each city.
	int n, a;
	cin >> n >> a;
	vector<int> criminals(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> criminals[i];

	int catched;
	if (criminals[a] == 1)
		catched = 1;
	else
		catched = 0;

	int before = a - 1, after = a + 1;

	while (before >= 1 && after <= n)
	{
		if (criminals[after] == 1 && criminals[before] == 1)
			catched += 2;
		before--;
		after++;
	}

	//before = 0
	if (before == 0)
		while (after <= n)
		{
			if (criminals[after] == 1)
				catched++;
			after++;
		}
	//or after = n + 1
	if (after == n + 1)
		while (before >= 1)
		{
			if (criminals[before] == 1)
				catched++;
			before--;
		}

	cout << catched;

	return 0;
}