#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;


typedef long long ll;
typedef unsigned int ui;


int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	bool turn = false;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		if (arr[i] % 2 == 0)
		{
			arr[i] /= 2;
		}
		else
		{
			arr[i] = turn ? ceil(float(arr[i]) / 2) : floor(float(arr[i]) / 2);
			turn = !turn;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}

	


	return 0;
}