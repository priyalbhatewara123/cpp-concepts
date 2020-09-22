//cumulative sum approach
//time complexity - O(n2)

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
	int cumSum[n] = {0};
	int maxSum = 0;
	int currentSum = 0;
	int left = -1;
	int right = -1;

	cin >> a[0];
	cumSum[0] = a[0];

	for (int i = 1; i < n; i++) {
		cin >> a[i];
		cumSum[i] = cumSum[i - 1] + a[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			currentSum = cumSum[j] - cumSum[i - 1];
			if (currentSum > maxSum) {
				maxSum = currentSum;
				left = i;
				right = j;
			}
		}
	}

	cout << "MAX SUM : " << maxSum << endl;
	cout << "Array with max sum: " << endl;
	for (int i = left; i <= right; i++) {
		cout << a[i] << " ";
	}

}