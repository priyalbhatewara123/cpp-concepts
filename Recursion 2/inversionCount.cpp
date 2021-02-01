/*
(6)
INVERSION COUNT:
Given an array , you need to find total number of pairs such that a[i] > a[j] where i<j.

We will use merge sort to solve this to reduce the time complexity.
*/

#include<bits/stdc++.h>
using namespace std;

int merge(int a[] , int s , int e) {
	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;
	int k = s;

	int temp[10];
	int count = 0; //store cross inversions

	while (i <= mid and j <= e) {
		if (a[i] < a[j]) {
			temp[k++] = a[i++];

		}

		else {
			temp[k++] = a[j++];
			count += mid - i + 1;
		}
	}

	//if elements are left in the array
	while (i <= mid)
		temp[k++] = a[i++];

	while (j <= e)
		temp[k++] = a[j++];

	//copy back elements from temp to original arrray
	for (int i = s; i <= e; i++) {
		a[i] = temp[i];
	}

	return count;
}

int inversion_count(int a[] , int s , int e) {

	//base case
	if (s >= e)
		return 0;

	//merge sort
	int mid = (s + e) / 2;
	int x = inversion_count(a, s, mid);
	int y = inversion_count(a, mid + 1, e);

	//cross inversions
	int z = merge(a, s, e);

	return x + y + z;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[] = {1, 5, 2, 6, 3, 0};
	int n = sizeof(a) / sizeof(int);

	cout << inversion_count(a, 0, n - 1);

	return 0;
}