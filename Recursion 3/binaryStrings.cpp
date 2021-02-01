/*
(8)
Count binary strings of length N, which have no consecutive ones.
For eg: for n = 2, ans is 3
00 , 01 and 10
*/

#include<bits/stdc++.h>
using namespace std;

int countStrings(int n) {

	//base case
	if (n == 1)
		return 2;

	if (n == 2)
		return 3;

	/*
	there are 2 options : The string will either ends with 0 or with 1.
	If string ends with 1 then the second last digit has to be 0.
	*/
	return countStrings(n - 1) + countStrings(n - 2);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	cout << countStrings(n);
	return 0;
}