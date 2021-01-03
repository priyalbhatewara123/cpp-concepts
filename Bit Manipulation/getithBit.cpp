/*
Problem Statement 3:
Given a number, find the i th bit from right. (from right index will start from 0)
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int i; cin >> i;
	int mask = (1 << i);

	int bit = (n & mask) > 0 ? 1 : 0;
	cout << bit;

	return 0;
}