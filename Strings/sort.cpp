#include<iostream>
#include<algorithm>
#include <string>
#include<bits/stdc++.h>
using namespace std;

//sorting strings based on their length
//increasing order
//if 2 strings have same length then they are arranged in lexographical order
bool compare(string a, string b)
{
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cin.get();
	string s[n];
	for (int i = 0; i < n; i++) {
		getline(cin, s[i]);
	}

	sort(s, s + n, compare);

	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}

}