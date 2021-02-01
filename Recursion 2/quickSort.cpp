/*
(7)
Quick sort Algorithm
- Divide and Conqure approach
- Inplace algorithm but might require extra space due to recursion call stack
- Time Complexity:
	NlogN - best and average case
	N^2   - worst case (can be improved using randomised quick sort)
*/

#include<bits/stdc++.h>
using namespace std;

int partition(int a[] , int s , int e) {

	int i = s - 1; // i keeps track of index of elements smaller than pivot
	int j = s;

	int pivot = a[e];

	for (; j < e; j++) {

		if (a[j] <= pivot) {
			i = i + 1;
			swap(a[i] , a[j]);
		}

		j = j + 1;

	}
	//place pivot element at correct index
	swap(a[i + 1] , a[e]);
	return i + 1;
}

void quickSort(int *a , int s , int e) {

	//base case
	if (s >= e)
		return;

	int p = partition(a, s, e);

	//left part
	quickSort(a, s, p - 1);
	//right part
	quickSort(a, p + 1, e);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[] = {2 , 7 , 8 , 6 , 1 , 5, 4};
	int n = sizeof(a) / sizeof(int);

	quickSort(a, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	return 0;
}