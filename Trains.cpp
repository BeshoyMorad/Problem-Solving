#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


//the idea is to know when will the two trains meet
//a = 5   b = 3

// 0     5       10      15
// 0   3   6   9    12   15

//Least common multiplier of (3, 5) will be 15
//then we will divide it by a and b to get the number of points before the point 15

// 1 => 15/5 = 3 - 1
// 2 => 15/3 = 5 - 1

//then we check which one have fewer visits will get the final visit and we done


ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}


int main() {
	FIO;

    ll a, b;
    cin >> a >> b;

    ll m = lcm(a, b);
    ll dasha = (m / a) - 1;
    ll masha = (m / b) - 1;

    if (dasha < masha)
        dasha++;
    else
        masha++;


    if (dasha == masha)
        cout << "Equal";
    else if (dasha > masha)
        cout << "Dasha";
    else
        cout << "Masha";

	return 0;
}
