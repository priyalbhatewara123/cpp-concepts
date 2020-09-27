//MERGE SORT ALGORITHM
#include<bits/stdc++.h>
using namespace std;

void merge(int *a , int s , int e) {
	int mid = (s + e) / 2;

	int i = s;
	int j = mid + 1;
	int k = s;

	//temp array to store sorted array
	int temp[100];
	while (i <= mid and j <= e) {
		if (a[i] < a[j]) {
			temp[k++] = a[i++];
		}

		else {
			temp[k++] = a[j++];
		}
	}

	while (i <= mid) {
		temp[k++] = a[i++];
	}
	while (j <= e) {
		temp[k++] = a[j++];
	}

	//finally copy temp array to original array
	for (int i = s; i <= e; i++) {
		a[i] = temp[i];
	}
}

void mergeSort(int a[] , int s , int e) {

	//base case
	if (s >= e)
		return;

	//follow 3 steps
	//1. divide
	int mid = (s + e) / 2;

	//2. recursively sort the 2 array
	mergeSort(a, s, mid);
	mergeSort(a, mid + 1, e);

	//3. merge the two parts
	merge(a, s, e);
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

	mergeSort(a, 0, n - 1);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;
}
