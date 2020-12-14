/*
PROBLEM STATEMENT:
You are given n activities (from 0 to n-1) with their start and finish times.
Select the maximum number of activities that can be performed by a single person,
assuming that a person can only work on a single activity at a time.

Input Format
The first line consists of an integer T, the number of test cases. For each test case, the first line consists of an integer N, the number of activities.
Then the next N lines contain two integers m and n, the start and end time of each activity.
*/

#include<bits/stdc++.h>
using namespace std;

//sort based on there finishing times
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