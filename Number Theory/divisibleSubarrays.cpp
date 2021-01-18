/*
(6)
PROBLEM STATEMENT:
You are given N elements, a1,a2,a3….aN. Find the number of good sub-arrays.
A good sub-array is a sub-array [ai,ai+1,ai+2….aj] such that (ai+ai+1+ai+2+….+aj) is divisible by N.
(Problem link: https://hack.codingblocks.com/app/practice/3/1065/problem)
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll modulo[1000005];
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		memset(modulo, 0, sizeof(modulo));
		modulo[0] = 1;
		ll sum = 0;
		ll no;
		for (ll i = 0; i < n; i++) {
			cin >> no;
			sum += no;   //cumulative sum
			sum %= n;   //modulo
			sum = (sum + n) % n; //to prevent negative sum
			modulo[sum]++;
		}

		ll ans = 0;
		for (ll i = 0; i < n; i++) {
			ans += (modulo[i] * (modulo[i] - 1)) / 2;
		}

		cout << ans << endl;
	}
}