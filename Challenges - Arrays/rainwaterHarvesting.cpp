/*
PROBLEM STATEMENT 2:
Rain Water Harvesting (imp problem)

Input Format
First line contains an integer n. Second line contains n space separated integers representing the elevation map.
10
0 2 1 3 0 1 2 1 2 1

Output Format
Print a single integer containing the maximum unit of waters she can save.
5

Best Approach - Two Pointer Approach
*/

#include<bits/stdc++.h>
using namespace std;

int maxWater(int a[] , int n) {

	int water = 0;
	int leftMax = 0;
	int rightMax = 0;

	//left and right counters to traverse array
	int l = 0;
	int r = n - 1;

	while (l < r) {
		if (a[l] < a[r]) {
			if (a[l] > leftMax)
				leftMax = a[l];
			else
				water += (leftMax - a[l]);

			l++;
		}

		else {
			if (a[r] > rightMax)
				rightMax = a[r];
			else
				water += (rightMax - a[r]);

			r--;
		}
	}

	return water;
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

	cout << maxWater(a, n);
	return 0;
}