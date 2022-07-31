#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

//need to add two elements to the array (first, last)

//memo[i][lastIndex]

//we choose between left, right, or middle
//if we choose left or middle then lastIndex = x[i]
//for left to be a valid choice
//  (x[i] - h[i]) > lastIndex

//if we choose right then lastIndex = x[i] + h[i]
//for right to be a valid choice
//  (x[i] + h[i]) < x[i+1]

int n;
int* x, *h;

ll memo[100000+9];

ll solve(int i, long lastIndex) {
    if (i == n)
        return 0;

    ll &ret = memo[i];

    if (ret != -1)
        return ret;

    //drop left
    if ((x[i] - h[i]) > lastIndex)
        ret = max(ret, solve(i + 1, x[i]) + 1);
    //drop right
    if ((x[i] + h[i]) < x[i+1])
        ret = max(ret, solve(i + 1, x[i] + h[i]) + 1);

    //in the middle
    ret = max(ret, solve(i + 1, x[i]));

    return ret;
}


int main() {
	FIO;

    cin >> n;
    x = new int[n + 1];
    h = new int[n + 1];
    for (int i = 0; i < n; ++i)
        cin >> x[i] >> h[i];

    FILL(memo, -1);
    x[n] = 2000000100;
    cout << solve(0, -1000000000);

    delete[] x;
    delete[] h;

	return 0;
}
