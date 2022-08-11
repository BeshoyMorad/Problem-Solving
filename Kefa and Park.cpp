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
    vector<pair<pair<int, int>, vector<int>>> graph(n + 1);
    for (int i = 0; i < n; ++i) {
        graph[i + 1].first.first = i + 1;
        cin >> graph[i + 1].first.second;
    }

    int from, to;
    for (int i = 0; i < n - 1; ++i) {
        cin >> from >> to;
        graph[from].second.push_back(to);
        graph[to].second.push_back(from);
    }


    queue<pair<pair<int, int>, vector<int>>> q;
    vector<int> depth(n + 1, 0);
    vector<bool> visited(n + 1, false);

    q.push(graph[1]);

    if (graph[1].first.second == 1)
        depth[1] = 1;
    else
        depth[1] = 0;

    int ans = 0;

    while (!q.empty()) {
        //get the current node
        pair<pair<int, int>, vector<int>> cur = q.front();
        q.pop();
        visited[cur.first.first] = true;

        //check if it was a leaf
        if (cur.second.size() == 1 && visited[cur.second[0]]) {
            //check the depth
            if (depth[cur.first.first] <= m)
                ans++;
        } else {

            if (depth[cur.first.first] <= m) {
                //visit all the children
                for (int i = 0; i < cur.second.size(); ++i) {
                    //update the depth then push it to queue
                    if (!visited[cur.second[i]]) {
                        if (graph[cur.second[i]].first.second == 1)
                            depth[cur.second[i]] = 1 + depth[cur.first.first];
                        else
                            depth[cur.second[i]] = 0;
                        q.push(graph[cur.second[i]]);
                    }
                }
            }
        }
    }

    cout << ans;

	return 0;
}
