//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
//typedef long long ll;
//typedef unsigned int ui;
//typedef unsigned long long ull;
//
//int main() {
//    FIO;
//
//    string s;
//    cin >> s;
//
//    if (s.size() < 2) {
//        cout << 0;
//    } else {
//        int count = 0;
//        ll sum = 10;
//        while (sum >= 10) {
//            sum = 0;
//            for (char i : s) {
//                //convert each digit to an int
//                sum += i - '0';
//            }
//            s = to_string(sum);
//            count++;
//        }
//        cout << count;
//    }
//
//
//
//    return 0;
//}