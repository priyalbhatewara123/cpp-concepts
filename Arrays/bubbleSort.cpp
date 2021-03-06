/*
Bubble Sort
Approach-
Take the largest element towards the end.
For n elements we have to do n-1 iterations.

Time Complexity-
Average and Worst case - O(n2)
Best case - O(n) (when array is already sorted)
*/

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[] , int n) {
	for (int itr = 1; itr < n; itr++) {
		for (int i = 0; i <= (n - itr - 1); i++) {
			if (a[i] > a[i + 1]) {
				swap(a[i] , a[i + 1]);
			}
		}
	}
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

	bubbleSort(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

