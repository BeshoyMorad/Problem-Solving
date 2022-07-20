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

	//m containers
	//in each container there is a[i] matchboxes and each matchbox contains b[i] matches
	int rucksack, containers;
	cin >> rucksack >> containers;

	vector<pair<int, int>> arr(containers);
	// first = matchs, second = matchboxes
	for (int i = 0; i < containers; i++)
		cin >> arr[i].second >> arr[i].first;
	
	sort(arr.begin(), arr.end());
	ll sum = 0;
 	for (int i = containers - 1; i >= 0; i--)
	{
		if (arr[i].second > rucksack)
		{
			sum += rucksack * arr[i].first;
			break;
		}
		else
		{
			sum += arr[i].second * arr[i].first;
			rucksack -= arr[i].second;
		}
	}

	cout << sum;

	return 0;
}