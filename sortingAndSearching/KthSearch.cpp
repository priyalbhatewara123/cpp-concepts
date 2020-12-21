/*
PROBLEM STATEMENT:
You are given two integers n and k.
Find the greatest integer x, such that, x^k <= n.
Approach:
We can solve using binary search start = 1 and end = n
*/

#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool isPossible(ll x , ll n , ll k) {
	if (pow(x, k) <= n) {
		return true;
	}

	return false;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n, k;
	cin >> n >> k;

	ll start = 1;
	ll end = n;
	ll ans = 0;

	while (start <= end) {
		ll mid = (start + end) / 2;
		if (isPossible(mid, n, k))
		{
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	cout << ans << endl;
}