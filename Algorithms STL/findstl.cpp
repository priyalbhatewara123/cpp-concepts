/*
1)
find() method is used to search an element in any container.
*/

#include <bits/stdc++.h>
using namespace std;

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

	//find method returns the address of the key
	cout << find(arr , arr + n , key) << endl;

	//to get the index of the key
	//subtract the address of key with base address
	auto it = find(arr , arr + n , key);
	int index = it - arr;

	//if key is not present
	if (index == n) {
		cout << "key is not present";
	}
	else {
		cout << "key is present at index " << index;
	}


	//to find the position of key in array add 1 to the index.

}