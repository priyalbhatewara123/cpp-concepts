/*
(5)
Merge Sort
*/

#include<bits/stdc++.h>
using namespace std;

void merge(int a[] , int start , int end) {

	int mid = (start + end) / 2;
	int i = start;
	int j = mid + 1;
	int k = start;

	int temp[10];
	while (i <= mid and j <= end) {
		if (a[i] < a[j])
			temp[k++] = a[i++];

		else
			temp[k++] = a[j++];
	}

	while (i <= mid)
		temp[k++] = a[i++];

	while (j <= end)
		temp[k++] = a[j++];

	for (int i = start ; i <= end ; i++) {
		a[i] = temp[i];
	}
}

void mergeSort(int a[] , int start , int end) {

	//base case
	if (start >= end)
		return;

	int mid = (start + end) / 2;
	mergeSort(a, start, mid);
	mergeSort(a, mid + 1 , end);

	merge(a, start, end);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[] = {5, 1 , 8 , 3 , 5, 6 , 2 , 0};
	int n = 8;
	mergeSort(a, 0, n - 1);

	for (int i = 0; i < 8; i++) {
		cout << a[i] << " ";
	}
}