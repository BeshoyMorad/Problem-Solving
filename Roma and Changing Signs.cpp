#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


int main() {
	FIO;
    int n, k;

    cin >> n >> k;
    vector<int> arr(n);
    long sum = 0;
    int mini = INT_MAX;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0 && k > 0) {
            arr[i] *= -1;
            k--;
        }
        sum += arr[i];
        mini = min(mini, arr[i]);
    }
    if (k % 2 == 1)
        sum -= 2 * mini;  //sub the first and then add it with negative sign

    cout << sum;

	return 0;
}
