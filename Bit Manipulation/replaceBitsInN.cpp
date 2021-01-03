/*
Problem Statement 7:
You are given two 32-bit numbers , N and M, and 2 bit positions, i and j(from end starting from 0).
Write a method to set all bits between i and j in N equal to M.


EXAMPLE:

Input:
N = 10000000000   M = 10101  i = 2  j = 6

Output:
N = 10001010100

Input: n=15  m=2  i=1  j=3
Output: 5

*/

#include<bits/stdc++.h>
using namespace std;

int clearRange(int n , int i , int j) {
	int a = (-1 << (j + 1));
	int b = (1 << i) - 1;

	//we will create a mask with zeroes in range [i,j] and rest all ones
	int mask = a | b;
	return (n & mask);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, i, j;
	cin >> n >> m >> i >> j;

	n = clearRange(n, i, j);

	int mask2 = m << i;

	cout << (n | mask2);

}