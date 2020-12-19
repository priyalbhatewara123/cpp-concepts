/*
Search an element in the rotated sorted array.
HINT -  use binary search
*/

#include<bits/stdc++.h>
using namespace std;

int searchKey(int a[] , int n, int key) {
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (a[mid] == key) {
			return mid;
		}
		else if (a[mid] >= a[start]) {
			if (key >= a[start] and key < a[mid]) {
				end = mid - 1;
			}
			else {
				start = mid + 1;
			}
		}
		else {
			if (key > a[mid] and key <= a[end]) {
				start = mid + 1;
			}
			else {
				end = mid - 1;
			}
		}
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
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int key; cin >> key;
	cout << searchKey(arr, n, key);
}