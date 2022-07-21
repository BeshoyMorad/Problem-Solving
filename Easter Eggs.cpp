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

    //set the first 7 places with the known colors
    //then for the n - 7 other places
    //we have to pick one color that achieve [Any four eggs lying sequentially should be painted different colors.]
    // R = 0 | O = 1 | Y = 2 | G = 3 | B = 4 | I = 5 | V = 6

    int n;
    cin >> n;
    string colors = "ROYGBIV";
    int first[7], last[7];
    for (int i = 0; i < 7; ++i) {
        first[i] = i;
        last[i] = i;
    }

    for (int i = 7; i < n; ++i) {
        //for the (n - 7) places
        for (int j = 0; j < 7; ++j) {
            bool one = false, two = false;
            //choose between 7 different colors
            // first[j] and last[j] the positions of that color
            //check if both first and last will be satisfied
            if (n - i + first[j] >= 4)
                one = true;
            if (i - last[j] >= 4)
                two = true;
            if (one && two) {
                colors += colors[j];
                last[j] = i;
                break;
            }
        }
    }

    cout << colors;
	return 0;
}
