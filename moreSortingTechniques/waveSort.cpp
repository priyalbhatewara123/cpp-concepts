/*
(7)
WAVE SORT:
*/

#include<bits/stdc++.h>
using namespace std;

void waveSort(int a[] , int n) {

	for (int i = 0; i < n; i += 2) {

		//previous element
		if (i != 0 and a[i] < a[i - 1])
			swap(a[i] , a[i - 1]);

		//next element
		if (i != (n - 1) and a[i] < a[i + 1])
			swap(a[i] , a[i + 1]);
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[] = {1, 3, 4, 2, 7, 8};
	int n = sizeof(a) / sizeof(int);

	waveSort(a, n);

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}