/*
PROBLEM STATEMENT 1
Take as input N, a number. Take N more inputs and store that in an array.
Write a recursive function which tests if the array is a palindrome and returns a Boolean value.

Sample Input
4
1
2
2
1
Sample Output
true

*/

#include<bits/stdc++.h>
using namespace std;

void checkPalindrome(int a[] , int n , int start , int end) {

	//base case
	if (start >= end) {
		cout << "true";
		return;
	}

	//recursive case
	if (a[start] == a[end]) {
		start++;
		end--;
		checkPalindrome(a, n, start, end);
	}
	else {
		cout << "false";
		return;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n ; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	checkPalindrome(a, n, 0, n - 1);
}