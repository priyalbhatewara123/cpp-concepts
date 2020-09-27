//You are given two 32-bit numbers , N and M, and 2 bit positions, i and j(from end starting from 0).
//Write a method to set all bits between i and j in N equal to M.

/*
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
	int mask1 = ~((-1 << (j + 1)) ^ (-1 << i));

	return (n & mask1);
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