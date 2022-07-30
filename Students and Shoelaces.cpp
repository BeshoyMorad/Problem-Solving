#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <queue>
#include <list>
#include <set>


using namespace std;

#define MP(x,y) make_pair(x,y)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


int main() {
	FIO;

    int n, m;
    cin >> n >> m;
    vector<set<int>> graph(n + 1);
    int x, y;

    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        graph[x].insert(y);
        graph[y].insert(x);
    }

    int ans = 0;

    while (true) {
        vector<int> v;
        for (int i = 1; i <= n; ++i) {
            if (graph[i].size() == 1)
                v.push_back(i);
        }

        //remove the laces
        for (int i = 0; i < v.size(); i++) {
            auto it = graph[v[i]].begin();
            if (it != graph[v[i]].end())
                graph[*it].erase(v[i]);
            graph[v[i]].clear();
        }

        if (v.size())
            ans++;
        else
            break;
    }

    cout << ans;

	return 0;
}
