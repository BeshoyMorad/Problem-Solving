#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


//using prime numbers 2,3,5
//20 ==> 2 2 5
//15 ==> 3 5

//countA
//2 3 5
//2 0 1

//countB
//2 3 5
//0 1 1

//the difference between them is the needed operations to make them equals

int main() {
	FIO;

    int a, b;
    cin >> a >> b;

    int countA[3] = {0};
    int countB[3] = {0};

    while (a) {
        if (a % 2 == 0)
            countA[0]++, a /= 2;
        else if (a % 3 == 0)
            countA[1]++, a /= 3;
        else if (a % 5 == 0)
            countA[2]++, a /= 5;
        else
            break;
    }

    while (b) {
        if (b % 2 == 0)
            countB[0]++, b /= 2;
        else if (b % 3 == 0)
            countB[1]++, b /= 3;
        else if (b % 5 == 0)
            countB[2]++, b /= 5;
        else
            break;
    }

    if (a == b)
        cout << abs(countA[0] - countB[0]) + abs(countA[1] - countB[1]) + abs(countA[2] - countB[2]);
    else
        cout << -1;


	return 0;
}
