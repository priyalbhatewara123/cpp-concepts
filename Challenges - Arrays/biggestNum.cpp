/*
PROBLEM STATEMENT 5:
You are provided an array of numbers. You need to arrange them in a way that yields the largest value.

Sample TestCase:
Input:
4
54 546 548 60
Output:
6054854654
*/

#include<bits/stdc++.h>
using namespace std;

bool compare(int a , int b) {
	string s1 = to_string(a);
	string s2 = to_string(b);

	return s1 + s2 > s2 + s1;
}

void biggestNumber(int a[] , int n) {
	sort(a, a + n, compare);

	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	biggestNumber(a, n);
	return 0;
}

// to_string() don't work in sublime.