#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


typedef long long ll;
typedef unsigned int ui;


int main() {
	int n, k;
	cin >> n >> k;
	int* arr = new int[n];
	int count = 0;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	
	for (int i = 0; i < n; i++)
		if (arr[i] >= arr[k-1] && arr[i] > 0)
			count++;

	cout << count;
	return 0;
}