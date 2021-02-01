/*
(6)
LADDER PROBLEM:
A child is standing on the ground initially. He/she has to climb a ladder of size N.
He can take max K steps at a time. Find the number of ways child can reach at the top.
*/

#include<bits/stdc++.h>
using namespace std;

int numberOfWays(int n , int k) {

	//base case
	if (n == 0)    //n=0 means number of ways to stand on ground which is 1
		return 1;
	if (n < 0)
		return 0;

	int ans = 0;
	for (int i = 1; i <= k; i++) {
		ans += numberOfWays(n - i, k);
	}

	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;

	cout << numberOfWays(n, k);
}