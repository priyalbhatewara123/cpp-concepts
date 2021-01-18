/*
(3)
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

//we will make a vector of all prime numbers till n using prime sieve approach
vector <int> primeSieve(int p[] , int n) {
	p[0] = p[1] = 0;
	p[2] = 1;

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

	//vector that will contain all prime numbers
	vector <int> primes;
	primes.push_back(2);
	for (int i = 3; i <= n; i += 2) {
		if (p[i] == 1)
			primes.push_back(i);
	}

	return primes;
}

//to see which all primes are the factors of given number
vector <int> factorize(int no , vector <int> &primes) {

	vector <int> factors;
	factors.clear();

	int i = 0;
	int p = primes[0];

	while (p * p <= no) {
		if (no % p == 0) {
			factors.push_back(p);
			while (no % p == 0) {
				no = no / p;
			}
		}
		i++;
		p = primes[i];
	}
	if (no != 1)
		factors.push_back(no);

	return factors;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int p[n] = {0};

	//vector containing all primes
	vector <int> primes = primeSieve(p, n);

	//we will do this for number of queries
	int t; cin >> t;
	while (t--) {
		int no; cin >> no;

		vector<int> factors = factorize(no , primes);
		for (auto f : factors)
			cout << f << " ";
		cout << endl;
	}
	return 0;
}