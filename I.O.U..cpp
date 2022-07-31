#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


int n, m;
int in[100+9];
int out[100+9];


int main() {
	FIO;

    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int src, dest, deb;
        cin >> src >> dest >> deb;
        out[src] += deb;
        in[dest] += deb;
    }

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (out[i] - in[i] >= 0)
            sum += out[i] - in[i];
    }

    cout << sum;

	return 0;
}
