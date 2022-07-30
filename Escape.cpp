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
    int vp; //the princess speed
    int vd; //the dragon speed
    int t;  //when will the dragon discover that the princess escaped
    int f; //time to straighten the things out in the treasury for the dragon
    int castle; //the distance between the cave and the king's castle

    cin >> vp >> vd >> t >> f >> castle;

    if (vp > vd) {
        cout << 0;
        return 0;
    }

    float princessLocation = vp * t;     //calculate the princess location until the dragon know the escape
    int neededBijous = 0;

    while (princessLocation < castle) {
        //time for the dragon to reach the princess
        float dragonCatchTime = princessLocation / (vd - vp);
        //the distance the princess will move until the dragon catch her
        princessLocation += dragonCatchTime * vp;

        if (princessLocation >= castle)
            break;

        neededBijous++;
        //time for the dragon to go back and put the bijous back
        float timeToGoBack = (princessLocation / vd) + f;
        princessLocation += timeToGoBack * vp;
    }

    cout << neededBijous;

	return 0;
}
