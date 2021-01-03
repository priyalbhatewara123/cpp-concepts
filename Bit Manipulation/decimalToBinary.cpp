/*
Problem Statement 8:
Given a number n, output it's binary representation.
Solve it using bitwise operator.
*/

#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n) {
	int ans = 0;
	int p = 1;
	while (n > 0) {
		ans += (n & 1) * p;
		n = n >> 1;
		p *= 10;
	}

	return ans;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	cout << decimalToBinary(n);

	return 0;
}