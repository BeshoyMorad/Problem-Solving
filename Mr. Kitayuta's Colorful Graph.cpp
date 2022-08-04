#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

int n, m, q, ans = 0;
vector<pair<int, int>> graph[109];
bool colorVisited[109];
bool verVisited[109];

void dfs(int cur, int dst, int color) {
    if (verVisited[cur])
        return;

    verVisited[cur] = true;

    if (cur == dst) {
        ans++;
        return;
    }

    //check all other edges that we can traverse
    for (int i = 0; i < graph[cur].size(); ++i) {
        //if it is not visited and its color is same we can go through it
        if (graph[cur][i].second == color && !verVisited[graph[cur][i].first])
            dfs(graph[cur][i].first, dst, color);
    }

}


int main() {
	FIO;

    int x, y, c;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x >> y >> c;
        graph[x].push_back(MP(y, c));
        graph[y].push_back(MP(x, c));
    }

    cin >> q;
    FILL(verVisited, false);

    while (q--) {
        cin >> x >> y;

        //loop through all possible vertices from the source [x]
        for (int i = 0; i < graph[x].size(); ++i) {
            //check a color once
            if (!colorVisited[graph[x][i].second]) {
                colorVisited[graph[x][i].second] = true;
                dfs(x, y, graph[x][i].second);
                FILL(verVisited, false);
            }
        }
        FILL(colorVisited, false);
        cout << ans << endl;
        ans = 0;
    }

	return 0;
}
