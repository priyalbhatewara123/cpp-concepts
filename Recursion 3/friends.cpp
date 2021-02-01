/*
(7)
FRIENDS PAIRING PROBLEM
Given N friends who wants to go to a party on bike. Each guy can go either single or in pair
Find number of ways in which N friends can go to a party.
*/

#include<bits/stdc++.h>
using namespace std;

int noOfWays(int n) {

	//base case
	if (n == 0)
		return 1; //no one going is one way

	if (n == 1 or n == 2)
		return n;

	return noOfWays(n - 1) + ((n - 1) * noOfWays(n - 2)); //if going in pair one person can
	//choose one from (n-1) persons who will become his/her pair
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	cout << noOfWays(n);

	return 0;
}