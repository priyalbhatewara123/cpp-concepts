/*
(7)
Problem link - https://hack.codingblocks.com/app/practice/5/1264/problem
Concept used: Inclusion Exclusion principle
*/

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll primes[] = {2, 3, 5, 7, 11, 13, 17, 19};

	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		ll subsets = (1 << 8) - 1;   //total number of subsets
		ll ans = 0;
		for (ll i = 1; i <= subsets ; i++) {
			ll denom  = 1;
			ll setbits = __builtin_popcount(i);

			for (int j = 0; j < 8; j++) {   //maximum bits are 8
				if (i & (1 << j)) {
					denom = denom * primes[j];
				}
			}

			if (setbits & 1) {  //if number of setbits are odd then addition takes place
				ans += n / denom;
			}
			else {
				ans -= n / denom;
			}
		}

		cout << ans << endl;
	}
	return 0;
}
