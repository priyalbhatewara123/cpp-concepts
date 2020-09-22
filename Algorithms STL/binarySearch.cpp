//search in sorted array
//efficient way is to search with the help of binary search algorithm
//as its complexity is logN

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
	bool present = binary_search(arr , arr + n , key);
	if (present) {
		cout << "present" << endl;
	}
	else {
		cout << "Not present" << endl;
	}

	//lower bound returns the address of number greater than or equal to the key
	//can write auto instead of int*(don't work in sublime)
	int* it2 = lower_bound(arr , arr + n , key);
	cout << "Lower bound " << (it2 - arr) << endl;

	//if (it-arr) equals to n then element is not present
	//ie if lower bound or upper bound equals to n then key is not present

	//upper bound returns the address of number greater than the key
	int* it3 = upper_bound(arr , arr + n , key);
	cout << "Upper bound " << (it3 - arr) << endl;

	//frequency of key
	//subtract upper bound with lower bound
	cout << "Frequency of key " << it3 - it2;



}