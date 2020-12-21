/*
PROBLEM STATEMENT:
Nishant is a very naughty boy in Launchpad Batch.
One day he was playing with strings, and randomly shuffled them all.
Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string,
then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.
*/

#include<bits/stdc++.h>
using namespace std;

bool cmp(string a , string b) {
	int i = 0;
	while (i < min(a.length(), b.length())) {
		if (a[i] != b[i]) {
			return a < b;
		}

		i++;
	}

	return a.length() > b.length();
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	cin.get();
	string arr[n];
	for (int i = 0; i < n; i++) {
		getline(cin, arr[i]);
	}

	sort(arr, arr + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}