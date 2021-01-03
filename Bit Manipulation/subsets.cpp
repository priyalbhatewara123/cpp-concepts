/*
PROBLEM STATEMENT 12:
Given a string, you need to find all the subsets
EXAMPLE:
Input - "abc"
Output - " " , a , b, c ,ab , bc , abc , ac
*/

#include<bits/stdc++.h>
using namespace std;

void filterchars(char a[] , int n) {
	int j = 0; //for maintaining index in the array
	while (n > 0) {
		int last_bit = (n & 1);
		if (last_bit) {
			cout << a[j];
		}

		j++;
		n = n >> 1;
	}
}

void printSubsets(char a[]) {
	int n = strlen(a);
	for (int i = 0; i < (1 << n) ; i++) {
		filterchars(a, i);
		cout << endl;
	}

	return;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char a[100];
	cin >> a;

	printSubsets(a);

	return 0;
}