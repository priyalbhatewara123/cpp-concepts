/*
Alocating 2D Dynamic Arrays.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int ** arr; //point an array of pointers that points each row.
	int r, c;
	cin >> r >> c;
	arr = new int * [r];

	for (int i = 0; i < r; i++)
		arr[i] = new int[c];

	int val = 1;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			arr[i][j] = val;
			val++;
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}