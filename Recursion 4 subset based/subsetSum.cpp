/*
PROBLEM STATEMENT:
Find whether if the sum of any of the non-empty subsets of the set A is zero.

Sample Test Case:
Input:
1
4
1 3 2 -3
Output:
Yes
*/

#include<bits/stdc++.h>
using namespace std;

bool zeroSubset(int a[] , int n , int i , int sum , int cnt) {

	//base case
	if (i == n) {
		if (sum == 0 && cnt > 0)
			return true;
		else
			return false;
	}

	return zeroSubset(a, n, i + 1, sum + a[i] , cnt + 1) || zeroSubset(a, n, i + 1, sum , cnt);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int input[n];
		for (int i = 0; i < n; i++) {
			cin >> input[i];
		}
		if (zeroSubset(input, n, 0, 0 , 0))
			cout << "Yes";
		else
			cout << "No";

		cout << endl;
	}
	return 0;
}