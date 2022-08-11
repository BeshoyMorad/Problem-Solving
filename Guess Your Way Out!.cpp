#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

//first we need to get the number of leaf nodes then get it's half
//see if [n] was on the left side or right side to make a decision
// if we are solving the left side of the tree then the index of the exit will not change
//else we will change the index of the exit to maintain the recursion function

const int LEFT = 0;
ll solve(int h, ll n, int cur) {
    if (h == 0)
        return 0;

    ll half = 1ll<<(h - 1);

    if (n <= half) {
        if (cur == LEFT)
            return 1 + solve(h - 1, n, 1);
        else
            return 2*half + solve(h - 1, n, 1);
    } else {
        if (cur == LEFT)
            return 2*half + solve(h - 1, n - half, 0);
        else
            return 1 + solve(h - 1, n - half, 0);
    }
}


int main() {
	FIO;

    int h;
    ll n;
    cin >> h >> n;

    cout << solve(h, n, 0);

	return 0;
}
