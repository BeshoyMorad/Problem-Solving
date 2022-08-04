#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

//we have 3 choices
//[1] take a rest ==> if (arr[today] == 0)
//[2] go to gym  ==> only if (arr[today] == 2 || arr[today] == 3)
//[3] do contest ==> only if (arr[today] == 1 || arr[today] == 3)

// prevActivity = 0 if he did sport
// prevActivity = 1 if he did contest

int n;
int* arr;
int memo[109][3];

int solve(int today, int prevActivity) {
    if (today == n)
        return 0;

    int &ret = memo[today][prevActivity];

    if (ret != -1)
        return ret;
    else
        ret = 1000000;

    if (prevActivity != 0 && (arr[today] == 2 || arr[today] == 3))
        ret = min(ret, solve(today + 1, 0));

    if (prevActivity != 1 && (arr[today] == 1 || arr[today] == 3))
        ret = min(ret, solve(today + 1, 1));

    if (arr[today] == 0 || ret == 1000000)
        ret = min(ret, 1 + solve(today + 1, 2));

    return ret;
}

int main() {
	FIO;

    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    FILL(memo, -1);

    cout << solve(0, 2);

	return 0;
}
