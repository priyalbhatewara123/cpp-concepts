/*
PROBLEM STATEMENT
Take as input str, a string. Write a recursive function which returns a new string in which
all duplicate consecutive characters are separated by a ‘ * ’.
E.g. for “hello” return “hel*lo”. Print the value returned

*/

#include<bits/stdc++.h>
using namespace std;

string duplicateChar(string s) {

	//base case
	if (s.length() <= 1)
		return s;

	//recursive case
	string res = duplicateChar(s.substr(1));
	if (res[0] == s[0])
		return s[0] + string("*") + res;

	return s[0] + res;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	cout << duplicateChar(s) << endl;

	return 0;
}