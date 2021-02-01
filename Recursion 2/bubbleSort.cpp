/*
(4)
Bubble sort using recursion by 2 methods.
*/

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[] , int n) {

	//base case
	if (n == 1)
		return;

	//recursive case
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1])
			swap(a[i] , a[i + 1]);
	}

	bubbleSort(a, n - 1);
}

void completeRecursive(int a[] , int n , int i) {

	//base case
	if (n == 1)
		return;

	//recursive call

	if (i == n - 1) {
		//one complete pass is done
		return completeRecursive(a, n - 1, 0);
	}

	if (a[i] > a[i + 1])
		swap(a[i], a[i + 1]);

	completeRecursive(a, n, i + 1);

}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[] = {5, 4, 1, 3, 2};
	int n = 5;
	//bubbleSort(a, n);
	completeRecursive(a, n, 0);

	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
}