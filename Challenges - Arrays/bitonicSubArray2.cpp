/*
APPROACH 2:
The idea is to check longest bitonic subarray starting at A[i].
From A[i], first we will check for end of ascent and then end of descent.
Overlapping of bitonic subarrays is taken into account by recording a nextStart position when it finds two equal values when going down the slope of the current subarray.
If length of this subarray is greater than max_len, we will update max_len.
We continue this process till end of array is reached.

Time Complexity - O(n)
Space Complexity - O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int bitonicSubarray(int a[] , int n) {

	//if array is empty
	if (n == 0)
		return 0;
	int maxLen = 1;
	int start = 0;
	int nextStart = 0; //for overlapping array
	int j = 0; //counter to traverse array

	while (j < n - 1) {

		//look for end of ascent
		while (j < n - 1 and a[j] <= a[j + 1])
			j++;

		//look for end of descent
		while (j < n - 1 and a[j] >= a[j + 1]) {
			if (j < n - 1 and a[j] > a[j + 1])
				nextStart = j + 1;

			j++;
		}

		maxLen = max(maxLen , j - (start - 1));
		start = nextStart;
	}

	return maxLen;
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