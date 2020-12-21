/*
PIVOT OF SORTED AND ROTATED ARRAY-
You are given a sorted but rotated array.
You need to find the index of the pivot element of the array
where pivot is that element in the array which is greater than its next element and divides the array into two monotonically increasing halves.

Use binary search for efficient solution.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int start = 0;
	int end = n - 1;

	while (start <= end) {
		int mid = (start + end) / 2;
		if (mid < end and a[mid] > a[mid + 1]) {
			cout << mid;
			break;
		}

		if (a[mid] < a[mid - 1] and mid > start) {
			cout << mid - 1 ;
			break;
		}

		//pivot is always found in unsorted part

		//when left part is unsorted
		if (a[start] >= a[mid])
			end = mid - 1;

		//when right part is unsorted
		else
			start = mid + 1;

	}
	return 0;
}

