/*
PROBLEM STATEMENT 6:
Inverting digit t means replacing it with digit 9 - t.
Transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits.
The decimal representation of the final number shouldn't start with a zero.

Sample Test Case:

Input
4545
Output
4444
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s; cin >> s;
	for (int i = 0; i < s.length() ; i++) {
		if (s[i] > '4') {
			s[i] = '9' - s[i] + '0';
		}

		if (s[0] == '0')
			s[0] = '9';
	}

	cout << s;
}