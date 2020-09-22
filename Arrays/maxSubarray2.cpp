//Kadane's algorithm
//time complexity - O(n)

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
	int curSum = 0;
	int maxSum = 0;

	for (int i = 0; i < n; i++) {
		curSum = curSum + a[i];
		if (curSum < 0) {
			curSum = 0;
		}
		maxSum = max(maxSum , curSum);
	}

	cout << "Max Sum: " << maxSum;
}