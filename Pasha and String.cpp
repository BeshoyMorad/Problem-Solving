#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

//the idea is to know the overlapping of the ranges
// ranges [(1, 3), (2, 4), (5, 6)]
//     1  2  3  4  5  6
//1 => 1  1  1  0  0  0
//2 => 1  2  2  1  0  0
//3 => 1  2  2  1  1  1

//other way is to add to the starting [1] and the end+1 [-1]
//     1  2  3  4  5  6
//1 => 1  0  0  -1  0  0
//2 => 1  1  0  -1  -1  0
//3 => 1  1  0  -1  0  0
//     1  2  2   1  1  1

// if the number was even then no need to reverse
// else reverse it with len - i + 1


int main() {
	FIO;

    int m;
    string s;
    cin >> s >> m;

    int len = s.size();
    vector<int> num(len+5, 0);
    int x;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        num[x]++;
        int end = len - x + 1;
        num[end]--;
    }

    //we just need len/2 so that we don't reverse it twice
    for (int i = 1; i <= len / 2; ++i) {
        num[i] += num[i-1];
        if (num[i] % 2 != 0)
            swap(s[i-1], s[len-i]);
    }

    cout << s;

	return 0;
}
