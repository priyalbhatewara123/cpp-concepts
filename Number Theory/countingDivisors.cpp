/*
(4)
Counting the number of divisors a number has.
Concept - In copy
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
int noOfDivisors(int no , vector <int> &primes) {
	int i = 0;
	int p = primes[0];
	int mul = 1;
	while (p * p <= no) {
		if (no % p == 0) {
			int count = 0;
			while (no % p == 0) {
				count++;
				no = no / p;
			}

			mul = mul * (count + 1);
		}

		i++;
		p = primes[i];
	}
	if (no != 1)
		mul = mul * 2;

	return mul;
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

	cout << noOfDivisors(n , primes) << endl;

	return 0;
}