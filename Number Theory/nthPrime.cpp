/*
(8)
PROBLEM STATEMENT:
Given a value of n, find nth prime number using Sieve of Eratosthenes
*/

#include<bits/stdc++.h>
#define MAX_SIZE 1000005
using namespace std;

void sieveOfEratosthenes(vector <int> &primes) {
	//isPrime array will store whether number is prime or not
	bool isPrime[MAX_SIZE];

	//initially mark every number as non-prime
	memset(isPrime, false, sizeof(isPrime));

	//marking odd numbers as prime
	for (int i = 3; i <= MAX_SIZE; i += 2) {
		isPrime[i] = true;
	}

	//mark there multiples as non-prime
	for (int i = 3; i <= MAX_SIZE; i += 2) {
		if (isPrime[i] == true) {
			//mark all multiples of i as non prime
			for (int j = i * i; j <= MAX_SIZE; j = j + i) {
				isPrime[j] = false;
			}
		}
	}

	//special case
	isPrime[0] = isPrime[1] = false;
	isPrime[2] = true;

	//push back all prime numbers to the vector
	for (int p = 2; p < MAX_SIZE; p++)
		if (isPrime[p])
			primes.push_back(p);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;

	//this vector will store all prime numbers till MAX_SIZE
	vector <int> primes;

	sieveOfEratosthenes(primes);
	cout << primes[n - 1];

	return 0;
}