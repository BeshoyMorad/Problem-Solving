#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


int countDigit(int n) {
    return floor(log10(n) + 1);
}

int n;
int maxDigits;

int solve(int digits, int num) {
    if (digits <= maxDigits && digits > 0) {
        if (num <= n)
            return 1 + solve(digits + 1, (num * 10) + 4) + solve(digits + 1, (num * 10) + 7);
        else
            return solve(digits + 1, (num * 10) + 4) + solve(digits + 1, (num * 10) + 7);
    }
    else
        return 0;
}

int main() {
	FIO;

    cin >> n;
    maxDigits = countDigit(n);


    cout << solve(1, 4) + solve(1, 7);
	return 0;
}