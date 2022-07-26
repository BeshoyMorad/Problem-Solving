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
    int t, n, dif;
    cin >> t;
    ll ans, prev;
    while (t--) {
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];

        sort(v.begin(), v.end());

        ans = 0;
        //for each string check the strings after it
        for (int i = 0; i < n; ++i) {
            if (i != 0 && v[i] == v[i - 1]) {
                ans += prev;
            } else {
                prev = 0;
                for (int j = i + 1; j < n; ++j) {
                    dif = 0;
                    if (v[i][0] != v[j][0])
                        dif++;
                    if (v[i][1] != v[j][1])
                        dif++;

                    if (dif == 1)
                        prev++;
                }
                ans += prev;
            }
        }

        cout << ans << endl;
    }


	return 0;
}
