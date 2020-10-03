/*
Write a recursive function to check if array is sorted.
*/

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[] , int n) {
	//base case
	if (n == 0 or n == 1)
		return true;

	//recursive case
	if (a[0] < a[1] and isSorted(a + 1, n - 1)) {
		return true;
	}

	return false;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	if (isSorted(a, n)) {
		cout << "Array is sorted";
	}

	else {
		cout << "Array is not sorted";
	}

	return 0;
}
