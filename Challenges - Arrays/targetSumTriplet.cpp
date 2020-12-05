/*
PROBLEM STATEMENT 1:
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number.
Write a function which prints all triplets of numbers which sum to target.

Note: All triplets must be printed in sorted order. Print only unique triplets.

Sample Input-
9
5 7 9 1 2 4 6 8 3
10
Sample Output-
1, 2 and 7
1, 3 and 6
1, 4 and 5
2, 3 and 5
*/

#include<bits/stdc++.h>
using namespace std;

void sumTriplet(int a[] , int n , int target) {
	for (int i = 0; i <= n - 3; i++) {
		int sum = target - a[i];
		int start = i + 1;
		int end = n - 1;

		while (start < end) {
			if (a[start] + a[end] == sum) {
				cout << a[i] << ", " << a[start] << " and " << a[end] << endl;
				start++;
				end--;
			}
			else if (a[start] + a[end] < sum)
				start++;
			else
				end--;
		}
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int target; cin >> target;
	sort(a, a + n);

	sumTriplet(a, n, target);
}