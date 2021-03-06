/*
SELECTION SORT
Arrange a randomly shuffled array in increasing/ decreasing order.

APPROACH-
Find the min element present in the array and swap it with the first element in
unsorted array.
time complexity - O(n2) in all 3 cases
*/

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[] , int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min_index]) {
				min_index = j;
			}
		}

		swap(a[i] , a[min_index]);
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	selectionSort(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}