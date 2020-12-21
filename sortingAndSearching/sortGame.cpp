/*
PROBLEM STATEMENT-
A list of employees with their salary is given. The maximum salary is 100.
Arrange the list in such a manner that the list is sorted in decreasing order of salary.
And if two employees have the same salary, they should be arranged in lexicographical manner
such that the list contains only names of those employees having salary greater than or equal to a given number x.

Sample Input
79
4
Eve 78
Bob 99
Suzy 86
Alice 86

Sample Output
Bob 99
Alice 86
Suzy 86
*/

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair <string, int> p1 , pair <string, int> p2) {
	if (p1.second == p2.second)
		return p1.first < p2.first;

	return p1.second > p2.second;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x; cin >> x;
	int n; cin >> n;
	pair <string , int > a[n];
	for (int i = 0; i < n; i++) {
		string name;
		int salary;
		cin >> name >> salary;
		a[i].first = name;
		a[i].second = salary;
	}

	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++) {
		if (a[i].second < x)
			break;

		cout << a[i].first << " " << a[i].second << endl;
	}
	return 0;
}