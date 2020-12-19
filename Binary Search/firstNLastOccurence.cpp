/*
PROBLEM STATEMENT:
Find first and last occurence of a key in sorted array. (return index of first and last occurence)
Approach - since the array is sorted therefore we will use binary search.
*/

#include<bits/stdc++.h>
using namespace std;

int first_occurence(int a[] , int n , int k) {
	int ans = -1;
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (a[mid] == k) {
			ans = mid;
			end = mid - 1;
		}
		else if (a[mid] > k) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}

	}
	return ans;
}

int last_occurence(int a[] , int n , int k) {
	int ans = -1;
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (a[mid] == k) {
			ans = mid;
			start = mid + 1;
		}
		else if (a[mid] > k) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}

	}
	return ans;
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
	cout << first_occurence(arr, n, key) << endl;
	cout << last_occurence(arr, n, key) << endl;
	return 0;
}