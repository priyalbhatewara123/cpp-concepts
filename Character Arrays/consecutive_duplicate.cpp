/*
Remove consecutive duplicate characters from a string.
Note: Solution should be in-place.
*/

#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(char a[]) {

	int length = strlen(a);
	if (length == 1 or length == 0) {
		return;
	}

	int prev_char = 0;
	for (int cur_char = 1; cur_char < length; cur_char++) {

		if (a[cur_char] != a[prev_char]) {
			prev_char++;
			a[prev_char] = a[cur_char];
		}

	}
	a[prev_char + 1] = '\0';
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char a[100];
	cin.getline(a, 100);
	removeDuplicate(a);
	cout << a;
}