/*
Return Dynamic Array:
Function returns a pointer to dynamic array. Array elements can be accessed
even from main function.
*/

#include <bits/stdc++.h>
using namespace std;

int* func() {
	//static array
	//int a[] = {1, 2, 3, 4, 5};

	//dynamic array
	int * a = new int [5];
	int val = 1;
	for (int i = 0; i < 5; i++) {
		a[i] = val;
		val++;
	}

	cout << a << endl;
	cout << a[0] << endl;
	return a;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int *b = func();
	cout << b << endl;
	cout << b[0] << endl;
	return 0;

	//clear array a by deleting array b
	delete [] b;
}