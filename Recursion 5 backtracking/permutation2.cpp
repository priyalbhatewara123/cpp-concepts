/*
Previous method of finding permutations may result in redundant permutations (eg: if s = "abb")
What if i want unique permutations and sorted lexicographicaly.
SET data structure can be used for the same.
*/

#include<bits/stdc++.h>
using namespace std;

void permute(char *in , int i, set <string> &s) {

	//base case
	if (in[i] == '\0') {
		string t(in);
		s.insert(t);
		return;
	}

	//recursive case
	for (int j = i; in[j] != '\0'; j++) {
		swap(in[i] , in[j]);
		permute(in, i + 1, s);

		//since we are making changes in input itself, we need to restore after every call
		swap(in[i] , in[j]); //backtracking
	}
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char input[10];
	cin >> input;

	set <string> s;
	permute(input, 0 , s);

	//loop to print all permutations
	for (auto itr = s.begin(); itr != s.end(); ++itr)
	{
		cout << '\t' << *itr;
	}


	return 0;
}

/*
Sample test case:

Input:
aba

Output:
aab	aba	baa

*/