/*
PROBLEM STATEMENT
Given a string, convert it into integer recursively
*/

#include<bits/stdc++.h>
using namespace std;

int stringToInt(char a[] , int len) {

	//base case
	if (len == 0)
		return 0;

	int digit = a[len - 1] - '0';
	int small_ans = stringToInt(a, len - 1);

	return small_ans * 10 + digit;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//char a[] = "1234";
	char a[10];
	cin >> a;
	int len = strlen(a);

	int number = stringToInt(a, len);

	cout << number << endl;
	cout << number + 1;

	return 0;
}