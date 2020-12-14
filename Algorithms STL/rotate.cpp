/*
Various STL functions
1. rotate()
2. next_permutation()
*/

#include <bits/stdc++.h>
using namespace std;

//rotate(start , point about which it has to be rotated , end of array )

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1 , 2, 3, 4 , 5};
	int n = sizeof(arr) / sizeof(int);

	rotate(arr, arr + 2, arr + n );

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//also applicable on vector

	//next permutation gives next permutation of elements of array

	next_permutation(arr , arr + n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	next_permutation(arr, arr + n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}



	return 0;
}