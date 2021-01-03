/*
PROBLEM STATEMENT 9:
We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once.
Find the unique numbers in linear time without using any extra space.
SAMPLE INPUT:
4
3 1 2 1

SAMPLE OUTPUT:
2 3
(print the unique numbers in ascending order)
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[n];
	int xor1 = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		xor1 = xor1 ^ a[i];   //finding xor of every element
	}

	//finding position of first setbit from right
	int temp = xor1;
	int pos = 0;
	while ((temp & 1) == 0) {
		pos++;
		temp >> 1;
	}

	//now we have first setbit at position "pos"

	//creating a mask to find all the numbers with setbit at position pos
	int mask = (1 << pos);
	int xor2 = 0;
	for (int i = 0; i < n; i++) {
		if ((a[i] & mask) > 0) {
			xor2 = xor2 ^ a[i];
		}
	}

	//xor2 contains one of the two number

	int x = xor2;  //first number
	int y = xor1 ^ xor2;  //second number

	//since smaller number is to be printed first
	cout << min(x, y) << " " << max(x, y);

	return 0;
}