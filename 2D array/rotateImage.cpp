/*
Write a program to rotate square array 90 degree anticlockwise without using STL.
*/

#include <bits/stdc++.h>
using namespace std;

void rotate(int a[][10] , int n) {

	//swapping the columns of the matrix
	int startCol = 0;
	int endCol = n - 1;
	while (startCol < endCol) {
		for (int i = 0; i < n; i++) {
			swap(a[i][startCol], a[i][endCol]);
		}
		startCol++;
		endCol--;
	}

	//taking transpose
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j) {
				swap(a[i][j], a[j][i]);
			}
		}
	}
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	rotate(a, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}