/*
(2)
Find the last occurence of the input key.
To find the last occurence of a key, we first write the recursive call and
then check for the index.
*/

#include<bits/stdc++.h>
using namespace std;

int lastOccurence(int a[] , int key , int n) {
	//base case
	if (n == 0)
		return -1;

	//recursive call
	int index = lastOccurence(a + 1, key, n - 1);

	//when element is not found in previous stage
	if (index == -1) {
		if (a[0] == key)
			return 0;
		else
			return -1;
	}

	//element already found in smaller sub problem
	else
		return index + 1;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 3, 7, 4, 5, 6, 7, 10};
	int key = 3;
	int n = sizeof(arr) / sizeof(int);

	cout << lastOccurence(arr, key, n);

	return 0;
}