#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

//the main idea here with factorials is to divide the numbers to the longest possible number
// 2 ==> 2!
// 3 ==> 3!
// 4 ==> 2! * 2! * 3!
// 5 ==> 5!
// 6 ==> 3! * 5!
// 7 ==> 7!
// 8 ==> 2! * 2! * 2! * 7!
// 9 ==> 2! * 3! * 3! * 7!


int main() {
	FIO;

    int n;
    ll a;
    cin >> n >> a;
    vector<int> num(n);

    for (int i = n - 1; i >= 0; --i) {
        num[i] = a % 10;
        a /= 10;
    }

//    vector<int> sol;
    for (int i = 0; i < n; ++i) {
        switch (num[i]) {
            case 4:
                num[i] = 3;
                num.push_back(2);
                num.push_back(2);
                break;

            case 6:
                num[i] = 5;
                num.push_back(3);
                break;

            case 8:
                num[i] = 7;
                num.push_back(2);
                num.push_back(2);
                num.push_back(2);
                break;

            case 9:
                num[i] = 7;
                num.push_back(2);
                num.push_back(3);
                num.push_back(3);
                break;
        }
    }


    sort(num.begin(), num.end(), greater<int>());
    for (int i = 0; i < num.size(); ++i)
        if (num[i] != 0 && num[i] != 1)
            cout << num[i];

	return 0;
}
