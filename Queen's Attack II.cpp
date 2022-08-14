//#include <bits/stdc++.h>
//using namespace std;
//
//#define MP(x,y) make_pair(x,y)
//#define FILL(v, d)		memset(v, d, sizeof(v))
//#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
//typedef long long ll;
//typedef unsigned int ui;
//typedef unsigned long long ull;
//
//int queensAttack(int n, int k, int r_q, int c_q, map<pair<int, int>, int> obstacles) {
//    int result = 0;
//    int r, c;
//    //check up
//    r = r_q + 1, c = c_q;
//    while (r <= n) {
//        if (obstacles[{r, c}])
//            break;
//        result++;
//        r++;
//    }
//    //check down
//    r = r_q - 1, c = c_q;
//    while (r >= 1) {
//        if (obstacles[{r, c}])
//            break;
//        result++;
//        r--;
//    }
//    //check left
//    r = r_q, c = c_q - 1;
//    while (c >= 1) {
//        if (obstacles[{r, c}])
//            break;
//        result++;
//        c--;
//    }
//    //check right
//    r = r_q, c = c_q + 1;
//    while (c <= n) {
//        if (obstacles[{r, c}])
//            break;
//        result++;
//        c++;
//    }
//
//
//
//    //check up-left
//    r = r_q + 1, c = c_q - 1;
//    while (r <= n && c >= 1) {
//        if (obstacles[{r, c}])
//            break;
//        result++;
//        r++;
//        c--;
//    }
//    //check up-right
//    r = r_q + 1, c = c_q + 1;
//    while (r <= n && c <= n) {
//        if (obstacles[{r, c}])
//            break;
//        result++;
//        r++;
//        c++;
//    }
//    //check down-left
//    r = r_q - 1, c = c_q - 1;
//    while (r >= 1 && c >= 1) {
//        if (obstacles[{r, c}])
//            break;
//        result++;
//        r--;
//        c--;
//    }
//    //check down-right
//    r = r_q - 1, c = c_q + 1;
//    while (r >= 1 && c <= n) {
//        if (obstacles[{r, c}])
//            break;
//        result++;
//        r--;
//        c++;
//    }
//
//    return result;
//}
//
//
//int main() {
//	FIO;
//
//    int n, k;
//    cin >> n >> k;
//    int r_q, c_q;
//    cin >> r_q >> c_q;
//
//    map<pair<int, int>, int> obstacles;
//    for (int i = 0; i < k; ++i) {
//        int r, c;
//        cin >> r >> c;
//        obstacles[{r, c}] = 1;
//    }
//
//    cout << queensAttack(n, k, r_q, c_q, obstacles);
//
//	return 0;
//}
