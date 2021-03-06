/*
(4)
PROBLEM STATEMENT

PLACE THE TILES:
Given a wall of size 4 X N and tiles of size (4,1) and (1,4).
In how many ways you can build the wall.
*/

#include<bits/stdc++.h>
using namespace std;

int numberOfWays(int n) {

	//base case
	if (n <= 3)
		return 1;

	return numberOfWays(n - 1) + numberOfWays(n - 4);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	cout << numberOfWays(n);

	return 0;
}