//hackerblocks algorithms problem
//1 ≤ N,M,X,Y ≤ 10^9​​
//use long long

#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPossible(ll n, ll m , ll x, ll y , ll mid) {
	ll avCoupon = m + (n - mid) * y;
	ll reqCoupon = mid * x;
	if (reqCoupon <= avCoupon) {
		return true;
	}

	return false;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n, m, x, y;
	cin >> n >> m >> x >> y;
	ll start = 0;
	ll end = n;
	ll ans = 0;
	while (start <= end) {
		int mid = (start + end) >> 1;
		if (isPossible(n, m, x, y, mid)) {
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	cout << ans;
	return 0;
}