/*
(1)
Problem Statement
Write spellings for given number using recursion.
For eg: 2048 - two zero four eight
*/

#include<bits/stdc++.h>
using namespace std;

//character array to store spellings of number 0-9
char words[][10] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" , "ten"};

void printSpellings(int n) {

	//base case
	if (n == 0)
		return;

	//recursive case
	printSpellings(n / 10);
	cout << words[n % 10] << " ";
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	printSpellings(n);
	return 0;
}