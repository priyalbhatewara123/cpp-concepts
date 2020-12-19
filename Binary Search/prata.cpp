//SPOJ problem

#include<bits/stdc++.h>
using namespace std;

bool isPossible(int r[] , int p , int c , int time) {
	int prata_made = 0;
	//how much prata each cook will make in that given time
	for (int i = 0; i < c; i++) {
		int t = r[i];
		int j = 2;
		while (t <= time) {
			prata_made += 1;
			t += (j * r[i]);
			j++;
			if (prata_made >= p) {
				return true;
			}
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
		int p; cin >> p;
		int c; cin >> c;
		int rank[c];
		int ans = 0;
		int max_rank = 1;
		for (int i = 0; i < c; i++) {
			cin >> rank[i];
			if (rank[i] > max_rank) {
				max_rank = rank[i];
			}
		}

		int start = 0;
		int end = (max_rank * (p * (p + 1))) / 2;
		while (start <= end) {
			int mid = (start + end) / 2;
			if (isPossible(rank, p, c, mid))
			{
				ans = mid;
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