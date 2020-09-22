//Search an element in row and column wise sorted array
//we will use StairCase search for this
//its time complexity is O(n)
//in this we start searching from top right corner

#include <bits/stdc++.h>
using namespace std;

void stairCase(int a[][10] , int n , int m, int key) {
	int i = 0;
	int j = m - 1;
	while (i<n and j >= 0) {
		if (key == a[i][j]) {
			cout << "Element found at:" << endl;
			cout << "Row : " << i + 1 << endl;
			cout << "Column : " << j + 1 << endl;
			return;
		}

		else if (key < a[i][j]) {
			j--;
		}
		else {
			i++;
		}
	}

	cout << "Element not found";
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

	int key; cin >> key;

	stairCase(a, n, m, key);

	return 0;
}