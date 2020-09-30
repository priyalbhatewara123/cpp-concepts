/*
Sieve Based Approach:
This method is useful when we have lots of queries i.e we need to find prime factors
for lots of numbers. We can precompute the prime numbers and divide the number with
them only instead of dividing by each number.

TIME COMPLEXITY:
pre computation time = O(Nlog(logN))
After this dividing the number by pre computed prime numbers takes O(log(N)) time.
if we ignore pre computing time than this can be done in log(N) time.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	printFactors(n);

	return 0;
}