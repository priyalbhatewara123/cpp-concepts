/*
BINARY SEARCH
Efficient way to search in sorted array
Divide and Conquer approach
Time complexity - O(log N)
*/

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[] , int n , int key) {

	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (key == a[mid])
			return mid;
		else if (key < a[mid])
			end = mid - 1;
		else
			start = mid + 1 ;
	}

	return -1;
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

	int key; cin >> key;

	int index = binarySearch(a, n, key);
	cout << "Element found at index " << index;

	return 0;
}