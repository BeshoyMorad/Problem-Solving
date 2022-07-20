#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef unsigned int ui;

ll sum(ll k) {
	return (k * (k + 1)) / 2;
}

ll sumFromTo(ll s, ll e) {
	if (s <= 1)
		return sum(e);
	return sum(e) - sum(s - 1);
}

ll solve(ll n, ll k) {
	ll start = 1, end = --k;
	--n;
	while (start < end)
	{
		ll mid = (start + end) / 2;
		ll sum = sumFromTo(mid, k);

		if (sum == n)
			return k - mid + 1;
		
		if (sum > n)
			start = mid + 1;
		else
			end = mid;
	}
	return k - start + 2;
}

int main() {
	FIO;

	//given n and k we will try to find another way of showing the problem
	//to make our lifes easier

	//4 3 : from (3 2) we will need 3 + 2 - 1 (for joining) = 4 == n
	//5 5 : if n <= k then we will use only one splitter
	//if the sum of all (2 3 4 .. k) < n then -1
	//then we will try to be greedy and choose the bigger numbers first so that we can reach n faster
	//but for the big numbers (10^9) it will not gonna be okay
	//so we will go with binary search to get a number and check the sum from that number to k
	//if we pick 4 then sum = 15			2 3 [4] [5] [6]
	//if n = 15 then we are done
	//if n = 17 which means bigger than the sum then we can get 1 number from the previous numbers [1, 2, 3]
	//to finish, then we will add 1 to the solution

	//note: instead of using the numbers 2 3 4 .. k then get the sum and subtract the joinings
	//we can start with 1 2 3 4 .. k - 1 and also n - 1 so we made a new problem 
	//why 1 2 3 ... k - 1?    if k = 5 --> 2 3 4 5 - 3 (for joining) so 2-1 3-1 4-1 5-1 --> (1 2 3 4) - 1 --> k - 1

	ll n, k;
	cin >> n >> k;
	ll test = sumFromTo(2, k) - (k - 2);
	if (test < n)
		cout << -1;
	else if (n == 1)
		cout << 0;
	else if (n <= k)
		cout << 1;
	else
		cout << solve(n, k);


	return 0;
}