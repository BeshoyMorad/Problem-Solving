#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

//for the first testcase
//from the grid ==> the number of dots   =============>      [2 1 2 4 4]
//let say that we need to have [0 for dots, 1 for hashes]    [0 1 1 0 0]
//then we have 2 choices everytime (make dots [0], make hashes [1])
//make dots   ==> n - num of dots
//make hashes ==> num of dots

//to choose dot (if i == 0 because it is the first col)
// or (prevWidth + 1 <= y && last == 0) last was dots and the width + 1 <= maxWidth
// or (last == 1 && width >= x) last was hashes and minWidth satisfied

//same for hashes

int n, m, x, y;
int arr[1000+9];
int memo[1000+9][1000+9][3];

int solve(int i, int width, int prevType) {
    if (i == m) {
        if(width < x || width > y)
            return 100000000;
        return 0;
    }

    int &ret = memo[i][width][prevType];

    if (ret != -1)
        return ret;

    int dots = 100000000;	// max answer is 1000x1000
    // nothing before or bigger block is valid or old block is allowed
    if(i == 0 || (prevType == 0 && width + 1 <= y) || (prevType == 1 && width >= x))
        dots = n - arr[i] + solve(i+1, (prevType == 0) ? width + 1 : 1, 0);

    int hashes = 100000000;
    if(i == 0 || (prevType == 1 && width+1 <= y) || (prevType == 0 && width >= x))
        hashes = arr[i] + solve(i+1, (prevType == 1) ? width + 1 : 1, 1);

    ret = min(dots, hashes);

    return ret;
}

int main() {
	FIO;

    cin >> n >> m >> x >> y;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            if (c == '.')
                arr[j]++;
        }

    FILL(memo, -1);
    cout << solve(0, 0, 2);

	return 0;
}
