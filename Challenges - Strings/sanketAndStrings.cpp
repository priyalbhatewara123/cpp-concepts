/*
PROBLEM STATEMENT 2:
Given a string consisting of only 'a' and 'b' , and an integer k denoting maximum
number of characters that can be changed. Find maximum length substring of equal
characters by changing no more than k characters.

Sample Input
2
abba
Sample Output
4

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int k; cin >> k;
	string s; cin >> s;
	int freq[2] = {0}; //to store frequency of a and b in the string

	int count = 0; //to count max length substring
	int leftIndex = 0;

	for (int i = 0; i < s.size(); i++) {
		freq[s[i] - 'a']++;

		if (min(freq[0], freq[1]) > k) {
			freq[s[leftIndex] - 'a']--;
			leftIndex++;
		}

		else {
			count++;
		}
	}

	cout << count;
	return 0;
}