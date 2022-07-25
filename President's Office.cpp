#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <set>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

bool valid(int x, int y, int n, int m) {
    return x >= 0 && y >= 0 && x < n && y < m;
}

int main() {
	FIO;
    int n, m;
    char president;
    cin >> n >> m >> president;

    vector<vector<char>> disk(n, vector<char>(m));
    set<char> deputies;
    vector<pair<int,int>> positions;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> disk[i][j];
            if (disk[i][j] == president)
                positions.push_back(make_pair(i,j));
        }
    }
    int dirx[] = {1, 0, -1, 0};
    int diry[] = {0, 1, 0, -1};

    for (int i = 0; i < positions.size(); ++i) {
        for (int j = 0; j < 4; ++j) {
            int x = positions[i].first + dirx[j];
            int y = positions[i].second + diry[j];
            if (valid(x,y,n,m) && disk[x][y] != '.' && disk[x][y] != president)
                deputies.insert(disk[x][y]);
        }

    }

    cout << deputies.size();

	return 0;
}
