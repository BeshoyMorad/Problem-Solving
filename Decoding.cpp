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
    int n;
    string s, result;
    cin >> n >> s;

    result += s[0];
    for (int i = 1; i < n; ++i) {
        if (i % 2 != 0)
            result = s[i] + result;
        else result += s[i];
    }

    if (n % 2 == 0) {
        reverse(result.begin(), result.end());
        cout << result;
    } else
        cout << result;


    return 0;
}
