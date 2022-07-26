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
    string s;
    cin >> t;
    bool no;
    int blue, red;
    while (t--) {
        cin >> n;
        cin >> s;
        no = false;
        blue = 0, red = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'R')
                red++;
            if (s[i] == 'B')
                blue++;
            if (s[i] == 'W' || i + 1 == n) {
                if ((red > 0 && blue == 0) || (red == 0 && blue > 0)) {
                    no = true;
                    break;
                }
                red = blue = 0;
            }
        }
        cout << (no? "NO" : "YES") << endl;
    }

	return 0;
}
