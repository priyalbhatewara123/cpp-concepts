/*
PROBLEM STATEMENT 3:
Take as input S, a string. Write a function that does basic string compression. Print the value returned.
E.g. for input “aaabbccds” print out a3b2c2d1s1.
*/

#include<bits/stdc++.h>
using namespace std;

string compressString(string s) {
	//base case
	if (s.length() == 0) {
		return " ";
	}

	char ch = s[0];
	int i = 1;

	while (i < s.size() and s[i] == ch)
		i++;

	string rec = s.substr(i);
	rec = compressString(rec);

	string charCount = to_string(i);
	return ch + charCount + rec;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s; cin >> s;
	cout << compressString(s);
	return 0;
}