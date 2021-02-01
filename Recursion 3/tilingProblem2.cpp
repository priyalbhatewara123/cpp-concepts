/*
(5)
PROBLEM STATEMENT:
Given a floor of size n x m. Find the number of ways to tile the floor with tiles of size 1 x m .
A tile can either be placed horizontally or vertically.
*/

#include<bits/stdc++.h>
using namespace std;

int numberOfWays(int n , int m) {

	//base case
	if (n <= (m - 1))
		return 1;

	//recursive case
	return numberOfWays(n - 1 , m) + numberOfWays(n - m , m);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n , m;
	cin >> n >> m;

	cout << numberOfWays(n , m);

	return 0;
}

/*
since the constraints were very large in this problem therefore it cannot be
solved only by recursion. We need to use dp for this
*/