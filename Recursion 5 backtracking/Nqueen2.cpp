/*
(5)
N-Queen using backtracking and bitsets (more optimised approach)
*/

#include<bits/stdc++.h>
using namespace std;

bitset <30> col , d1 , d2;

void totalways(int r , int n , int &ans) {

	//base case
	if (r == n) {
		ans++ ;
		return;
	}

	//recursive case
	for (int c = 0; c < n; c++) {
		if (!col[c] && !d1[r - c + n - 1] && !d2[r + c]) {
			col[c] = d1[r - c + n - 1] = d2[r + c] = 1;
			totalways(r + 1 , n  , ans);

			//backtracking
			col[c] = d1[r - c + n - 1] = d2[r + c] = 0;
		}
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int ans = 0;   //ans will keep trach of total number of possible ways
	totalways(0, n , ans);

	cout << ans;
	return 0;
}
