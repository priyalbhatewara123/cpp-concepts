#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[] , int n) {
	for (int i = 1; i < n; i++) {
		int element = a[i];
		int j = i - 1;
		while (j >= 0 and a[j] > element) {
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = element;
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

	insertionSort(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}