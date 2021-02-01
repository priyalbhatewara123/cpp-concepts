/*
(2)
PROBLEM STATEMENT:
Generate balanced brackets using N pairs of round brackets.

For eg:
if N = 2
() () and (()) so ans is 2.
*/

#include<bits/stdc++.h>
using namespace std;

void generate_brackets(char *output , int n, int indx , int open , int close) {
//open and close will keep track of number of opening and closing brackets used

	//base case
	if (indx == 2 * n) {
		output[indx] = '\0';
		cout << output << endl;
		return;
	}

	//in recursive case we have 2 options either place an opening bracket or a closing bracket

	//for opening bracket
	if (open < n) {
		output[indx] = '(';
		generate_brackets(output, n, indx + 1, open + 1, close);
	}

	//for closing bracket
	if (close < open) {
		output[indx] = ')';
		generate_brackets(output, n, indx + 1, open, close + 1);
	}

	return;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	char outputArray[100];

	generate_brackets(outputArray , n , 0 , 0 , 0);
}