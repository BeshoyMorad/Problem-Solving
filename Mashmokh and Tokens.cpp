#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

//if we have a = 2, b = 5, w = 24
//w = 24   ==>   (w * a) / b = 9.6
//w = 23   ==>   (w * a) / b = 9.2
//w = 22   ==>   (w * a) / b = 8.8

//then save 1 (w = 23) and take 9 dollars rather than save 2 (w = 22) and take 8 dollars
//note: if we have (w = 24) we will take 9 dollars

// (w * a) % b ==> will give us the number needed to be removed from (w * a)
// so we have to divide it by a to get the number needed to be removed from w

int main() {
	FIO;

    int n, a, b;
    cin >> n >> a >> b;

    ll w;
    for (int i = 0; i < n; ++i) {
        cin >> w;

        ll mul = (w * a) % b;


        cout << mul / a << " ";
    }


	return 0;
}
