/*
(1)
Problem Statement:
Find the number of all n digit distinct integers which is formed by the
two distinct digits ai and bi but there is a rule to form n digit integer.

Rule: She has to form n digit integer by using two digits ai and bi without consecutive bi.

Input Format:
The first line contains T, the number of test cases.
Further T lines contains the value n which is the number of digit in the integer.

Sample Input
3
1
2
3
Sample Output
#1 : 2
#2 : 3
#3 : 5

Explanation
For n=1 : integers = a, b . For n=2 : integers = aa, ab, ba For n=3 : integers = aaa, aab, aba, baa, bab

*/

#include<bits/stdc++.h>
using namespace std;

int numberOfno(int n) {
	if (n == 1)
		return 2;

	if (n == 2)
		return 3;

	return numberOfno(n - 1) + numberOfno(n - 2);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	int i = 1;
	while (t--) {
		int n; cin >> n;
		int ans = numberOfno(n);
		cout << "#" << i++ << " : " << ans << endl;
	}
	return 0;
}
