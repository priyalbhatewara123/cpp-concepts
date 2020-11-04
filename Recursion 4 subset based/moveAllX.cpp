/*
PROBLEM STATEMENT:
Take as input str, a string. Write a recursive function which moves all ‘x’ from the string to its end.
E.g. for “abexexdexed” return “abeedeedxxx”.

Note: All x's are moved to the end of string while the order of remaining characters remain the same.
*/

#include<bits/stdc++.h>
using namespace std;

void moveX(char* inp , int i , int l) {

	//base case
	if (i >= l)
		return;

	//recursive case
	char present_char = inp[i];
	if (present_char != 'x')
		cout << present_char;
	moveX(inp, i + 1, l);

	if (present_char == 'x')
		cout << present_char;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char inp[20];
	cin >> inp;

	int length = strlen(inp);
	moveX(inp , 0, length);

	return 0;
}