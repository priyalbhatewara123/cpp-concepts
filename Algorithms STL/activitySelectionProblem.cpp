//You are given n activities (from 0 to n-1) with their start and finish times.
//Select the maximum number of activities that can be performed by a single person,
//assuming that a person can only work on a single activity at a time.

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		int n, a, b;
		cin >> n;
		pair<int, int> arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			arr[i] = make_pair(a, b);
		}
		sort(arr, arr + n, cmp);
		int ans = 1, chosen = 0;
		for (int i = 1; i < n; i++)
		{
			if (arr[i].first >= arr[chosen].second)
			{
				ans++;
				chosen = i;
			}
		}
		cout << ans << endl;
	}
	return 0;
}