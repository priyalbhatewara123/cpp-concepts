/*
Given a vector, keep track of the present indexes corresponding to each element
and after sorting print element with its previous respective indexes.
examples:
Input: Arr[] = {2, 5, 3, 7, 1}
Output: {1, 4} {2, 0} {3, 2} {5, 1} {7, 3}
*/

#include<bits/stdc++.h>
using namespace std;

void sortWithIndex(int a[5] , int n) {
	vector < pair<int , int> > v;
	for (int i = 0; i < n; i++) {
		v.push_back(make_pair(a[i], i));
	}
	sort(v.begin(), v.end());

	cout << "Element\t" << "Previous Index" << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << "\t" << v[i].second << endl;
	}
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sortWithIndex(a, n);
}