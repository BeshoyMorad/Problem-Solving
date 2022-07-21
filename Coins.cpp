#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


int main() {
	FIO;

    string s[3];
    string input;
    for (int i = 0; i < 3; ++i) {
        cin >> input;
        if (input[1] == '>') {
            s[i] += input[2];
            s[i] += input[0];
        } else {
            s[i] += input[0];
            s[i] += input[2];
        }
    }

    string result;
    int worked = 0;

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (i != j)
                if (s[i][1] == s[j][0]) {
                    result = s[i] + s[j][1];
                    worked++;
                }

    cout << (worked == 1? result : "Impossible");

	return 0;
}
