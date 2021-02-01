/*
PROBLEM STATEMENT 1:
We are given two coins of value x and y.
We have to find the maximum of value of a XOR b where x <= a <= b <= y.

Input Format:
We are given two integers x and y
5
6

Output Format:
Print the maximum value of a XOR b
3
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int x , y;
	cin >> x >> y;

	int xor1 = x ^ y; //this will give number of digits in ans
	int digits = 0;
	while (xor1) {
		digits++;
		xor1 = xor1 >> 1;
	}

	cout << (pow(2, digits) - 1);

	return 0;
}