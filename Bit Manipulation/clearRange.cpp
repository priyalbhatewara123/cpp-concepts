/*
Problem Statement 6:
Clear a range of bits from index i to index j (index starts from 0 from end)

EXAMPLE:
Input: n = 31 , i = 1 , j = 3
Output:
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


//clear last i bits
int clearLastIBits(int n , int i) {

	int mask = (-1 << i);  // i is number of bits
	return (n & mask);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; int i, j;
	cin >> n >> i >> j;
	cout << clearRange(n, i, j);

	// int n ; int i;
	// cin >> n >> i;
	// cout << clearLastIBits(n, i);
}

/*
IMPORTANT CONCEPTS

In this ques we will need a mask with all ones initially
1. -1 is all one in 2's complement
2. (~0) = -1

If we need a number of form 0000111 (n number of ones at the end)
2^n - 1
*/