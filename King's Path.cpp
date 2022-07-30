#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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

    pair<int, int> from, to;
    cin >> from.first >> from.second >> to.first >> to.second;

    int n;
    cin >> n;
    set<pair<int, int>> points;
    for (int i = 0; i < n; ++i) {
        int r,x,y;
        cin >> r >> x >> y;
        for (int j = x; j <= y; ++j)
            points.insert(MP(r, j));
    }

    //start BFS from the starting point and test all the 8 positions
    //               u,     d,     r,    l,     ul,     ur,    dl,    dr
    int dx[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int dy[8] = {0, 0, 1, -1, -1, 1, -1, 1};

    map<pair<int, int>, int> len;
    queue<pair<int, int>> q;
    pair<int, int> cur;
    int dep = 0;
    q.push(from);
    len[from] = 0;

    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            cur = q.front(); q.pop();

            //loop through every possible wayt from the cur point
            for (int i = 0; i < 8; ++i) {
                int newX = cur.first + dx[i];
                int newY = cur.second + dy[i];
                pair<int, int> newPoint = MP(newX, newY);

                //if the point does not exist or already visited then continue
                if (points.count(newPoint) == 0 || len[newPoint] != 0)
                    continue;

                q.push(newPoint);
                len[newPoint] = dep + 1;

                if (newPoint.first == to.first && newPoint.second == to.second) {
                    cout << dep + 1;
                    return 0;
                }
            }
        }
        dep++;
    }

    cout << -1;

    return 0;
}
