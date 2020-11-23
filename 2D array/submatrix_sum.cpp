/*
Problem Statement:
Find the sum of all possible submatrix.

Most optimised method:
Find the contribution of each cell in the total sum.
Time complexity - O(n2)
Space complexity - O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int submatrix_sum(int a[100][100], int n , int m) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum += a[i][j] * ((i + 1) * (j + 1) * (n - i) * (m - j));
		}
	}
	return sum;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;
	int arr[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	cout << submatrix_sum(arr, n, m);
}