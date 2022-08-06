#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


//create 2 array with prefix sum of ones and zeros
//            01
//            00111
//ones  ==>   00123
//zeros ==>   12222

//loop through each char of s string and check (if char was '0' search for ones in the available range and vice versa)

int main() {
	FIO;


    string s, t;
    cin >> s >> t;
    int sSize = s.size(), tSize = t.size();

    vector<int> zeros(tSize + 1, 0), ones(tSize + 1, 0);
    for (int i = 0; i < tSize; ++i) {
        ones[i + 1] = ones[i] + (t[i] == '1');
        zeros[i + 1] = zeros[i] + (t[i] == '0');
    }

    int startingIndexOfEnd = tSize - sSize;
    //range from i to startingIndexOfEnd + i
    ll ans = 0;
    for (int i = 0; i < sSize; ++i) {
        if (s[i] == '0')
            ans += ones[startingIndexOfEnd + i + 1] - ones[i];
        else
            ans += zeros[startingIndexOfEnd + i + 1] - zeros[i];
    }
    cout << ans;

	return 0;
}