//Write a recursive function to perform binary search

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[] , int start , int end , int key) {
	int mid = (start + end) / 2;
	if (a[mid] == key) {
		return mid;
	}
	else if (a[mid] < key) {
		return binarySearch(a, mid + 1, end, key);
	}
	else {
		return binarySearch(a, start, mid - 1, key);
	}
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

	int key; cin >> key;

	cout << binarySearch(a, 0, n - 1, key);

	return 0;
}