/*
Spiral print of 2d array -
Approach - We will do this with the help of four pointers
startRow , endRow , startCol and endCol
*/

#include <bits/stdc++.h>
using namespace std;

void spiralPrint(int a[10][10] , int n , int m) {
	int startRow = 0;
	int endRow = n - 1;
	int startCol = 0;
	int endCol = m - 1;
	while (startRow <= endRow and startCol <= endCol) {
		//first Row
		for (int i = startCol; i <= endCol; i++) {
			cout << a[startRow][i] << " ";
		}
		startRow++;

		//last column
		for (int i = startRow; i <= endRow; i++) {
			cout << a[i][endCol] << " ";
		}
		endCol--;

		//last row
		if (endRow >= startRow) {
			for (int i = endCol; i >= startCol; i--) {
				cout << a[endRow][i] << " ";
			}
		}

		endRow--;

		//start column
		if (endCol >= startCol) {
			for (int i = endRow; i >= startRow; i--) {
				cout << a[i][startCol] << " ";
			}
		}
		startCol++;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;
	int a[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	spiralPrint(a, n, m);
	return 0;
}