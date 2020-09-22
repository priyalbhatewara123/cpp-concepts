//hackerblocks problem in algorithm section

#include<bits/stdc++.h>
using namespace std;

bool isPossible(int a[] , int n , int m , int cur_min) {
	int student_used = 1;
	int pages_read = 0;
	for (int i = 0; i < n; i++) {
		if (pages_read + a[i] > cur_min) {
			student_used++;
			pages_read = a[i];
			if (student_used > m) {
				return false;
			}
		}
		else {
			pages_read += a[i];
		}
	}
	return true;
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
		int m; cin >> m;
		int a[n];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		int start = a[n - 1];
		int end = sum;
		int ans = INT_MAX;
		while (start <= end) {
			int mid = (start + end) / 2;
			if (isPossible(a, n, m, mid)) {
				ans = min(ans, mid);
				end = mid - 1;
			}
			else {
				start = mid + 1;
			}
		}

		cout << ans << endl;
	}

	return 0;
}