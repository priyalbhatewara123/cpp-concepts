/*
PERMUTATIONS
Given a string s, task is to find all permutations of string s.
For eg: s = "abc"
permutations -> abc , acb , bac , bca , cab , cba i.e 3! (= 6)
*/

#include<bits/stdc++.h>
using namespace std;

void permute(char *in , int i) {

	//base case
	if (in[i] == '\0') {
		cout << in << endl;
		return;
	}

	//recursive case
	for (int j = i; in[j] != '\0'; j++) {
		swap(in[i] , in[j]);
		permute(in, i + 1);

		//since we are making changes in input itself, we need to restore after every call
		swap(in[i] , in[j]);  //backtracking
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char input[10];
	cin >> input;

	permute(input, 0);
	return 0;
}