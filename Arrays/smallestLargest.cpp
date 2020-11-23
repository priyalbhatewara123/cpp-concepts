/*
Find the largest and smallest element of the array.
*/

#include<bits/stdc++.h>
using namespace std;

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

	int largest = INT_MIN ;
	int smallest = INT_MAX ;

	for (int i = 0; i < n; i++) {
		largest = max(largest, a[i]);
		smallest = min(smallest, a[i]);
	}

	cout << "Largest - " << largest << endl;
	cout << "Smallest - " << smallest << endl;
}