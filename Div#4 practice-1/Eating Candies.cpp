#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


int main() {
	FIO;

    int t, n;
    cin >> t;

    ll aliceLeft = 0, bobRight = 0;
    int aliceIndex, bobIndex;
    ll ans, total; //whenever they equal save the ans
    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        aliceIndex = 0; bobIndex = n - 1;
        aliceLeft = bobRight = 0;
        total = 0;
        ans = 0;
        while (aliceIndex <= bobIndex) {
            total++;
            if (aliceLeft > bobRight) {
                bobRight += v[bobIndex--];
                if (aliceLeft == bobRight)
                    ans = total;
            } else { // aliceLeft < bobRight
                aliceLeft += v[aliceIndex++];
                if (aliceLeft == bobRight)
                    ans = total;
            }
        }

        cout << ans << endl;
    }


	return 0;
}
