/*
PROBLEM STATEMENT 4:
Maximum length Bitonic Subarray-
A subarray A[i … j] is biotonic if there is a k with i <= k <= j such that A[i] <= A[i + 1] … <= A[k] >= A[k + 1] >= .. A[j – 1] > = A[j]
i.e subarray is first increasing and then decreasing or entirely increasing or decreasing.

Sample Input
6
12 4 78 90 45 23

Sample Output
5

APPROACH 1:
We create two arrays - 'inc' and 'dec'

* inc[i] stores the length of increasing subarray till i.
* dec[i] stores the length of decreasing subarray starting from index i.
* Doing so gives us the length of increasing and decreasing subarray at each index in O(n) time.
* We calculate the length of the longest bitonic subarray by finding the maximum inc[i] + dec[i] - 1
* We subtract one since the current element at ith index is included in both the increasing and decreasing subarray lengths.

Time complexity - O(n)
Space complexity - O(n)
*/

#include<bits/stdc++.h>
using namespace std;

int bitonicSubarray(int a[] , int n) {
	int inc[n];
	int dec[n];

	inc[0] = 1;
	dec[n - 1] = 1;

	//construct increasing array
	for (int i = 1; i < n; i++)
		inc[i] = ((a[i] >= a[i - 1]) ? inc[i - 1] + 1 : 1);

	//construct decreasing array
	for (int i = n - 2; i >= 0; i--)
		dec[i] = ((a[i] >= a[i + 1]) ? dec[i + 1] + 1 : 1);

	int max = inc[0] + dec[0] - 1;
	for (int i = 1; i < n; i++) {
		int current = inc[i] + dec[i] - 1;
		if (current > max)
			max = current;
	}
	return max;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << bitonicSubarray(a, n);
	return 0;
}