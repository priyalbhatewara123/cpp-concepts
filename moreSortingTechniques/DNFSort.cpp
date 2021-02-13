/*
(6)
DNF Sort
Sort the array of 0's, 1's and 2's.
Inplace and in single pass(O(N)).
*/

#include<bits/stdc++.h>
using namespace std;

void dnf_sort(int a[] , int n) {

	int lower = 0;
	int mid = 0;
	int high = n - 1;

	while (mid <= high) {

		if (a[mid] == 0) {
			swap(a[lower] , a[mid]);
			lower++;
			mid++;
		}

		else if (a[mid] == 1) {
			mid++;
		}
		else {
			swap(a[mid] , a[high]);
			high--;

		}
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[] = {2, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 2, 0};
	int n = sizeof(a) / sizeof(int);

	dnf_sort(a, n);

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}