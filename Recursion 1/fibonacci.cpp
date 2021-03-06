/*
(1)
Problem Statement:
Find nth term in fibonacci series using recursion
*/

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {

	//base case
	if (n == 0 or n == 1) {
		return n;
	}

	return (fibonacci(n - 1) + fibonacci(n - 2));
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	cout << fibonacci(n);

	return 0;
}