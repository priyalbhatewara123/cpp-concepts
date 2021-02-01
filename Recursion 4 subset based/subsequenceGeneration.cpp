/*
(1)
Given a string of length n , find all possible subsequence/subsets of that string.
for eg:
s = "abc"  subsets = [ " " , "a","b","c","ab","ac","bc","abc"]
*/

#include<bits/stdc++.h>
using namespace std;


void generate_subsequence(char *in , char *out , int i , int j) { // i and j are pointers
	//for input and output array respectively

	//base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	//recursive case
	//include present character
	out[j] = in[i];
	generate_subsequence(in, out, i + 1, j + 1);

	//exclude present character
	generate_subsequence(in , out , i + 1 , j);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char input[] = "abcd";
	char output[10];

	generate_subsequence(input, output, 0 , 0);

}