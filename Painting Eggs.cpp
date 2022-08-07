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

    int n;
    cin >> n;

    int priceA, priceG;
    int paidToA = 0, paidToG = 0;
    string ans;

    for (int i = 0; i < n; ++i) {
        cin >> priceA >> priceG;

        int afterPickingA = 1000, afterPickingG = 1000;
        //try to take A
        if (abs((paidToA + priceA) - paidToG) <= 500) {
            afterPickingA = abs((paidToA + priceA) - paidToG);
        }
        //try to take G
        if (abs((paidToG + priceG) - paidToA) <= 500) {
            afterPickingG = abs((paidToG + priceG) - paidToA);
        }
        //make a choice
        if (afterPickingA <= afterPickingG) {
            ans += "A";
            paidToA += priceA;
        } else {
            ans += "G";
            paidToG += priceG;
        }
    }
    if (abs(paidToG - paidToA) > 500)
        cout << -1;
    else
        cout << ans;


	return 0;
}
