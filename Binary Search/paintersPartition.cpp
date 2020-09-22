//hackerblocks algorithms problem
//problem similar to book allocation

#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPossible(ll k , ll n , ll length[] , ll time ) {
	ll painters = 1;
	ll t = 0;
	for (ll i = 0; i < n; i++) {
		if (t + length[i] > time) {
			painters++;
			t = length[i];
			if (painters > k) {
				return false;
			}
		}
		else {
			t += length[i];
		}
	}
	return true;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int k; int n;
	cin >> k >> n;
	ll length[n];
	ll start = 0;
	ll end = 0;
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> length[i];
		start = max(start, length[i]);
		end += length[i];
	}

	while (start <= end) {
		ll mid = (start + end) >> 1;
		if (isPossible(k, n, length, mid)) {
			ans = mid;
			end = mid - 1;
		}

		else {
			start = mid + 1;
		}
	}

	cout << ans;
	return 0;
}
