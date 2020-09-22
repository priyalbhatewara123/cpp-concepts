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
		cout << "given string is palindrome";
	}
	else {
		cout << "not";
	}

	return 0;

}