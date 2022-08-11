#include <bits/stdc++.h>
using namespace std;

#define MP(x,y) make_pair(x,y)
#define FILL(v, d)		memset(v, d, sizeof(v))
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


vector<string> remove(vector<string> mat, int c) {
    for (int i = 0; i < mat.size(); ++i)
        mat[i].erase(c, 1);

    return mat;
}

int main() {
	FIO;

    int n, m;
    cin >> n >> m;
    vector<string> mat(n);
    for (int i = 0; i < n; ++i)
        cin >> mat[i];

    if (n == 1)
        cout << 0;
    else {

        //check each char with the char below it
        //if smaller break
        //else remove that column

        //whenever a change happen we need to stop the loops and start over again
        bool change = true;
        while (change) {
            change = false;
            for (int i = 0; !change && i < n - 1; ++i) {
                for (int j = 0; !change && j < mat[i].size(); ++j) {
                    if (mat[i][j] > mat[i + 1][j]) {
                        mat = remove(mat, j);
                        change = true;
                    } else if (mat[i][j] < mat[i + 1][j])
                        break;
                }
            }
        }


        cout << m - mat[0].size();

    }

	return 0;
}
