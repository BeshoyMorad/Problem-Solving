#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;


int main() {
	FIO;

    int n, m;
    cin >> n;

    vector<int> hm(n + 1);
    int input;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        hm[input] = i + 1;
    }

    cin >> m;
    vector<int> search(m);
    for (int i = 0; i < m; ++i)
        cin >> search[i];

    //Vasya starts from 1 to n
    //Petya starts from n to 1
    ll Vasya = 0, Petya = 0;

    for (int i = 0; i < m; ++i) {
        //search value = search[i]
        Vasya += hm[search[i]];
        Petya += n - hm[search[i]] + 1;
    }

    cout << Vasya << " " << Petya;

	return 0;
}