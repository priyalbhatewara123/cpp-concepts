//SPOJ problem

#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPossible(ll n, ll m, ll height[] , ll h) {
	ll wood = 0;
	for (ll i = 0; i < n; i++) {
		if (height[i] > h) {
			wood += (height[i] - h);
		}
	}
	if (wood >= m) {
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
	ll n, m;
	cin >> n >> m;
	ll height[n];
	ll maxHeight = 0;
	for (int i = 0; i < n; i++) {
		cin >> height[i];
		maxHeight = max(maxHeight, height[i]);
	}
	ll start = 0;
	ll end = maxHeight;
	ll ans = 0;
	while (start <= end) {
		ll mid = (start + end) / 2;
		if (isPossible(n, m, height, mid)) {
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