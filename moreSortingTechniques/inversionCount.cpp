/*
(2)
INVERSION COUNT:
Find all pairs of the array such that a[i] > a[j] for i<j .
*/

#include<bits/stdc++.h>
using namespace std;

int merge(int a[] , int start , int end) {

	int mid = (start + end) / 2;
	int i = start;
	int j = mid + 1;
	int k = start;

	int temp[100]; int count = 0;
	while (i <= mid and j <= end) {

		if (a[i] > a[j]) {
			count += (mid - i + 1);
			temp[k++] = a[j++];
		}
		else {
			temp[k++] = a[i++];
		}
	}

	while (i <= mid) {
		temp[k++] = a[i++];
	}

	while (j <= end) {
		temp[k++] = a[j++];
	}

	//copy all elements back to the array
	for (int i = start; i <= end; i++) {
		a[i] = temp[i];
	}

	return count;
}

int inversionCount(int a[] , int start , int end) {

	//base case
	if (start >= end)
		return 0;


	int mid = (start + end) / 2;

	//self inversions
	int x = inversionCount(a, start, mid);
	int y = inversionCount(a, mid + 1, end);

	//cross inversions by merge function
	int z = merge(a, start, end);

	return x + y + z;
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

	cout << inversionCount(a, 0, n - 1);

	return 0;
}

/*
HINT:
Solve using merge sort.
*/