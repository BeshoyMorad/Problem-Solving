#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

int memo[1000001];

ll divisor(int num) {
    ll count = 0;
    for (int i = 1; i * i <= num; ++i) {
        if (num % i == 0) {
            count++;
            if (i * i != num)
                count++;
        }
    }
    return count;
}
int main() {
	FIO;

    int a, b, c;
    cin >> a >> b >> c;
    FILL(memo, -1);

    ll sum = 0;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                if (memo[i*j*k] != -1)
                    sum += memo[i*j*k];
                else {
                    memo[i*j*k] = divisor(i*j*k);
                    sum += memo[i*j*k];
                }
            }
        }
    }

    cout << sum;

	return 0;
}
