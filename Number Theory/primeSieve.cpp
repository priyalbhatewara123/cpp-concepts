/*
(1)
PRIME SIEVE / SIEVE OF ERATOSTHENES
Efficient way to print all the prime numbers upto n.
Time Complexity - O(Nlog(logN)) which is nearly equal to O(n) (approximately linear)

APPROACH:
All even numbers except 2 are not primes.
Mark all odd numbers prime. Then visit every odd number and mark all its multiples
as not prime.
*/

#include<bits/stdc++.h>
using namespace std;

void prime_sieve(int *p, int n) {
	//all even numbers are not prime so they can be neglected

	//first mark all odd numbers prime
	for (int i = 3; i <= n; i += 2) {
		p[i] = 1;
	}

	for (int i = 3; i <= n; i += 2) {
		if (p[i] == 1) {
			//mark all multiples of i as non prime
			for (int j = i * i; j <= n; j = j + i) {
				p[j] = 0;
			}
		}
	}

	//special case
	p[0] = p[1] = 0;
	p[2] = 1;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int p[n + 1] = {0};

	prime_sieve(p, n);

	for (int i = 0; i <= n; i++) {
		if (p[i] == 1) {
			cout << i << " ";
		}
	}

	return 0;
}