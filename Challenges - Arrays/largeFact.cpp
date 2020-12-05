/*
PROBLEM STATEMENT 7:
Factorial of a large number:
Concept - take a res array to store factorial value
In starting we store 0! then in a loop we keep on multiplying every number from 2
till n with array res.
*/

#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

int multiply(int a[] , int n , int length) {
	int carry = 0;
	for (int i = 0; i < length; i++) {
		int prod = n * a[i] + carry;
		a[i] = prod % 10;
		carry = prod / 10;
	}

	while (carry) {
		a[length] = carry % 10;
		carry = carry / 10;
		length++;
	}

	return length;
}

void factorial(int n) {
	int res[MAX];
	int res_len = 1;
	res[0] = 1;
	for (int i = 2; i <= n; i++)
		res_len = multiply(res, i, res_len);

	for (int i = res_len - 1; i >= 0; i--)
		cout << res[i];
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	factorial(n);

	return 0;
}