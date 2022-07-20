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
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	if (n == 1)
		cout << 1;
	else
	{
		int maxNum;
		int currentNum = 1;

		//start with i = 0
		int i = 0, after = 1, before;
		while (after < n && arr[i] >= arr[after])
		{
			currentNum++;
			i++;
			after++;
		}
		maxNum = currentNum;


		//loop from i = 1 to i = n - 1
		for (int j = 1; j < n - 1; j++)
		{
			i = j, after = i + 1, before = i - 1;
			currentNum = 1;

			while (before >= 0 && arr[i] >= arr[before])
			{
				currentNum++;
				before--;
				i--;
			}
			i = j;
			while (after < n && arr[i] >= arr[after])
			{
				currentNum++;
				i++;
				after++;
			}
			if (currentNum > maxNum)
				maxNum = currentNum;
		}

		//start from i = n - 1 to i = 0
		i = n - 1, before = n - 2;
		currentNum = 1;
		while (before >= 0 && arr[i] >= arr[before])
		{
			currentNum++;
			before--;
			i--;
		}

		if (currentNum > maxNum)
			maxNum = currentNum;

		cout << maxNum;
	}


	return 0;
}