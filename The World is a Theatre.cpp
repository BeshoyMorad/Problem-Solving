#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

//choosing boys starting from (4 to n)
//choosing girls by (t - boys)

ll C(int n, int r) {
    ll res = 1;
    for (int i = 0; i < r; ++i)
        res = (res * (n - i)) / (i + 1);
    return res;
}


int main() {
	FIO;

    int n, m, t;
    cin >> n >> m >> t;

    ll ans = 0;
    for (int boys = 4; boys <= n; ++boys) {
        int girls = t - boys;
        if (girls > 0)
            ans += C(n, boys) * C(m, girls);
    }

    cout << ans;

	return 0;
}
