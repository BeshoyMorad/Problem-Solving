#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;



//the idea is to check the number of lines that divides the line which connect home to university
//if the equation > 0 then the point above it
//if the equation < 0 then the point below it


int main() {
	FIO;

    ll x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int n, a, b, c;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
        ll s1 = a * x1 + b * y1 + c;
        ll s2 = a * x2 + b * y2 + c;

        if ((s1 > 0 && s2 < 0) || (s1 < 0 && s2 > 0))
            ans++;
    }

    cout << ans;



	return 0;
}
