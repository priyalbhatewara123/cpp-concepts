//Problem Statement:
//You will be given an array containing only 0s, 1s and 2s.
//You have to sort the array in linear time that is O(N) where N is the size of the array.

#include<bits/stdc++.h>
using namespace std;

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

	int low = 0;
	int mid = 0;
	int high = n - 1;

	while (mid <= high) {
		if (a[mid] == 0) {
			swap(a[low], a[mid]);
			low++;
			mid++;
		}
		else if (a[mid] == 1) {
			mid++;
		}
		else {
			swap(a[mid], a[high]);
			high--;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}