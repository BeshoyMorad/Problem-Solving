#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


int main() {
	FIO;
    int n, l;
    cin >> n >> l;
    int* postions = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> postions[i];
    sort(postions, postions + n);

    //get the biggest difference
    double d = INT_MIN;
    for (int i = 0; i < n - 1; ++i)
            d = max(d, double(postions[i + 1] - postions[i]));

    d = double(d) / 2;

    //check the boundaries of the first and last lanterns
    if (postions[0] != 0)
        d = max(d, double(postions[0]));

    if (postions[n - 1] != l)
        d = max(d, double(l - postions[n - 1]));

    cout << setprecision(9) << d;

	return 0;
}
