//Wave print of 2D array

#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int row; cin >> row;
	int col; cin >> col;
	int a[row][col];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> a[i][j];
		}
	}

	for (int c = 0; c < col; c++) {
		if (c % 2 == 0) {
			for (int r = 0; r < row; r++) {
				cout << a[r][c] << " ";
			}
		}
		else {
			for (int r = row - 1; r >= 0; r--) {
				cout << a[r][c] << " ";
			}
		}
	}

	return 0;
}