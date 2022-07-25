#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
template<typename T, typename L>
void cinArr(T n, L* arr) {
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
}

int main() {
	FIO;

    int n, k;
    cin >> n >> k;
    int* arr = new int[n];
    cinArr(n, arr);

    //get the first k fences sum
    int sum = 0;
    for (int i = 0; i < k; ++i)
        sum += arr[i];

    //get the other sums
    int ans = sum, index = 1;
    for (int i = 1; i < n - k + 1; ++i) {
        int hold = arr[i - 1];
        arr[i - 1] = sum;
        sum = sum - hold + arr[i + k - 1];
        if (sum < ans) {
            ans = sum;
            index = i + 1;
        }
    }
    cout << index;


	return 0;
}
