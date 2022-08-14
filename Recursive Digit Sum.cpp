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
//int superDigit(string n) {
//    if (n.size() == 1)
//        return n[0] - '0';
//    else {
//        int sum = 0;
//        for (char i : n)
//            sum += i - '0';
//        return superDigit(to_string(sum));
//    }
//}
//
//int main() {
//	FIO;
//
//    string n;
//    int k;
//    cin >> n >> k;
//
//    int num = superDigit(n);
//    num *= k;
//    cout << superDigit(to_string(num));
//	return 0;
//}
