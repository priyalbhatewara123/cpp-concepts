/*
(1)
Find the first occurence of the input key
we will solve it using recursion (recursion in linear search)
*/

#include<bits/stdc++.h>
using namespace std;

//this function returns the index of first occuence of key
int firstOccurence(int a[] , int key , int n) {

	//base case if element not found
	if (n == 0)
		return -1;

	//if key is present at first index itself
	if (a[0] == key)
		return 0;

	//recursive call
	int index = firstOccurence(a + 1 , key , n - 1);
	if (index == -1)
		return -1;
	else
		return index + 1;

}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 3, 6, 4, 5, 6, 7, 10};
	int key = 6;
	int n = sizeof(arr) / sizeof(int);

	cout << firstOccurence(arr, key, n);

	return 0;
}