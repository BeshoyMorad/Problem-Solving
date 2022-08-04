#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


int main() {
	FIO;

    int n, m;
    cin >> n >> m;


    //think of it as a graph with source = n
    //we have two choices (n * 2, n - 1) but each choice have a condition
    //int a = n * 2 ==> a <= 2*10^4 && not visited before
    //int b = n - 1 ==> b > 0 && not visited before

    queue<int> q;
    vector<int> sol(20001, -1);

    q.push(n);
    sol[n] = 0;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        if (cur == m)
        {
            cout << sol[cur];
            return 0;
        }

        int a = cur * 2;
        if (a <= 20000 && sol[a] == -1) {
            sol[a] = sol[cur] + 1;
            q.push(a);
        }

        int b = cur - 1;
        if (b > 0 && sol[b] == -1) {
            sol[b] = sol[cur] + 1;
            q.push(b);
        }

    }

	return 0;
}
