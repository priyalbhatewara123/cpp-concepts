#include<bits/stdc++.h>
using namespace std;

/*
Method: 1
Directly printing the indices without storing them
*/
void allOccurences(int *a , int n , int key , int i) {

	//base case
	if (i == n)
		return;

	if (a[i] == key)
		cout << i << " ";

	allOccurences(a, n, key, i + 1);
}

/*
Method: 2
Storing all indices in an array
*/

//we will return size of output array from this function
int storeOccurences(int *a , int n , int key , int i , int *output , int j) {
	//j will keep track of index in output array

	//base case
	if (i == n)
		return j;

	if (a[i] == key) {
		output[j] = i;
		return storeOccurences(a, n, key, i + 1, output, j + 1);
	}

	return storeOccurences(a, n, key, i + 1, output, j);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int key; cin >> key;

	//allOccurences(arr, n , key , 0);

	int output[10];
	int s = storeOccurences(arr, n, key, 0, output, 0);

	for (int i = 0; i < s; i++) {
		cout << output[i] << " ";
	}
}