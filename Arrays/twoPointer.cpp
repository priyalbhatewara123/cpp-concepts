/*
Given a sorted array, find all pair of elements that sum to k.
Approach - We will use two-pointer approach ,this approach is applicable only if array is sorted.
Time Complexity - O(n)
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
	int k; cin >> k;

	int i = 0; int j = n - 1;
	while (i < j) {
		int sum = a[i] + a[j];
		if (sum == k) {
			cout << a[i] << " " << a[j] << endl;
			i++;
			j--;
		}
		else if (sum < k) {
			i++;
		}
		else {
			j--;
		}
	}

	return 0;
}