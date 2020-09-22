//spoj problem
//solve using monotonic search space

#include<bits/stdc++.h>
using namespace std;

bool canPlaceCows(int a[] , int n , int c , int distance) {
	//place the first cow at first index
	int last_cow = a[0];

	//to count number of cows placed
	int count = 1;
	for (int i = 1; i < n; i++) {
		if ((a[i] - last_cow) >= distance) {
			last_cow = a[i];
			count++;
			if (count == c)
				return true;
		}
	}

	return false;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int c; cin >> c;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int ans = 0;
		sort(arr, arr + n);
		int start = 0;
		int end = arr[n - 1] - arr[0];
		while (start <= end) {
			int mid = (start + end) >> 1;
			bool cowRakhPaye = canPlaceCows(arr, n, c, mid);
			if (cowRakhPaye) {
				ans = mid;
				start = mid + 1;
			}
			else {
				end = mid - 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}