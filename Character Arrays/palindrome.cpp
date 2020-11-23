/*
Find whether the input string is palindrome or not.
*/

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
	int i = 0;
	int j = s.size() - 1;
	while (i < j) {
		if (s[i] == s[j]) {
			i++;
			j--;
		}
		else {
			return false;
		}
	}
	return true;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	if (isPalindrome(s)) {
		cout << "Given string is palindrome.";
	}
	else {
		cout << "Given string is not a palindrome.";
	}

	return 0;

}