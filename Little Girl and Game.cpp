#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

// let's say we have
// aabbcc  ==> numOFOnes = 0  (First)

// aba     ==> numOFOnes = 1  (First)

//if first start with even he will lose
// abca    ==> numOFOnes = 2  (First)
//if the first remove [b] or [c] second will win so he will remove [a]
// bca    ==> numOFOnes = 3  (Second)
//second have no choices but to remove one of the letters
// bc    ==> numOFOnes = 2  (First)
// c     ==> numOFOnes = 1  (Second)

//if first start with odd he will win

int main() {
	FIO;

    string s;
    cin >> s;

    map<char, int> hm;
    for (char & i : s)
        hm[i]++;

    int count = 0;
    for (auto & i : hm)
        if (i.second % 2 != 0)
            count++;

    if (count == 0 || count == 1)
        cout << "First";
    else {
        if (count % 2 == 0)
            cout << "Second";
        else
            cout << "First";
    }

	return 0;
}
