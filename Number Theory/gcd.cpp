/*
Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the GCD of N1 and N2. Print the value returned.
*/

//We will use Euclid's GCD Algorithm
//HCF is same as GCD

//time complexity - O(log(max(n1 , n2)))

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n1 , n2;
	cin >> n1 >> n2;

	cout << gcd(n1 , n2);

	return 0;
}