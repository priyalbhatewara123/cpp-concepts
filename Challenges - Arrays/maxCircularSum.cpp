/*
PROBLEM STATEMENT 3:
You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form.
You need to find the maximum sum of consecutive numbers.

Approach -
There are 2 possible case:
1. solution with wrap around property - inverte the array and then apply kadane's algo
2. solution without wrap around property - solve by kadane algo

One boundary case-
When all elements are negative , this approach returns 0.
*/

#include<bits/stdc++.h>
using namespace std;

//Kadanes algorithm - it returns max subarray sum of linear array.
int maxKadane(int a[] , int n) {
	int curSum = 0;
	int maxSum = 0;

	for (int i = 0; i < n; i++) {
		curSum = curSum + a[i];
		if (curSum < 0) {
			curSum = 0;
		}
		maxSum = max(maxSum , curSum);
	}
	return maxSum;
}



int maxSum(int a[] , int n) {
	int withoutWrap = maxKadane(a, n); //without wrap around solution
	int sum = 0;
	for (int i = 0; i < n; i++) {
		a[i] *= -1;
		sum += a[i];
	}

	int minSum = maxKadane(a, n);  //with wrap around solution
	int maxSumWrap = (-(sum - minSum));

	return max(withoutWrap, maxSumWrap);
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

	cout << maxSum(a, n);
	return 0;
}