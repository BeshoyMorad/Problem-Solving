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
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	if (n == 1)
		cout << "YES";
	else
	{
		// 1 1 1 1 (4) need another (3) 1 2 1 2 1 2 1
		// C + (C - 1)
		sort(arr, arr + n);
		bool solved = true;
		int c = 1;
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] == arr[i + 1])
				c++;
			else
			{
				if (n < 2*c - 1)
				{
					solved = false;
					break;
				}
				c = 1;
			}
			if (i == n - 2)
			{
				if (n < 2 * c - 1)
					solved = false;
			}
		}
		if (solved)
			cout << "YES";
		else
			cout << "NO";


	}


	return 0;
}