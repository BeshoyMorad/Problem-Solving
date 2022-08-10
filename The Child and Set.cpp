#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

int lowbit(int n)
{
    if(n == 0)
        return 0;
    int position = 1;
    int m = 1;

    while (!(n & m)) {

        // left shift
        m = m << 1;
        position++;
    }
    return pow(2, position - 1);
}


int main() {
	FIO;

    int sum, limit;
    cin >> sum >> limit;

    vector<int> ans;
    for (int i = limit; i >= 1; --i) {
        int lowBit = lowbit(i);
        if (sum - lowBit >= 0)
            ans.push_back(i), sum -= lowBit;
    }

    if (sum == 0) {
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); ++i)
            cout << ans[i] << ' ';
    }
    else
        cout << -1;

	return 0;
}
