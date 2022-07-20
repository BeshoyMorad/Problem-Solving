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
	vector<pair<int, int>> arr;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		arr.push_back(make_pair(x, y));
	}


	sort(arr.begin(), arr.end());
	bool flag = false;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i].second > arr[i+1].second)
		{
			flag = true;
			break;
		}
	}

	cout << (flag ? "Happy Alex" : "Poor Alex");

	return 0;
}