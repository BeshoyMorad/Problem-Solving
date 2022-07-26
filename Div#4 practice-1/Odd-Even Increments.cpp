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
    int t, n, input;
    cin >> t;
    map<int, int> hm;
    bool flag;
    while (t--) {
        flag = true;
        cin >> n;
        for (int j = 0; j < n; ++j) {
            cin >> input;
            hm[input]++;
        }

        for (auto & it : hm) {
            if (it.second >= 3) {
                flag = false;
                cout << it.first << endl;
                break;
            }
        }
        if (flag)
            cout << -1 << endl;

        hm.clear();
    }


	return 0;
}

