//find the character with maximum frequency in the string
//this approach uses pair to store characters and frequency.
//time complexity of this approach is O(n2)

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	pair <char , int> PAIR[1000] ;
	int j = 0;
	PAIR[j].first = s[0];
	PAIR[j].second = 1;
	for (int i = 1; i < s.length(); i++) {
		int flag = 0;
		for (int k = 0; k <= j; k++) {
			if (s[i] == PAIR[k].first) {
				PAIR[k].second++;
				flag = 1;
			}
		}
		if (flag == 0) {
			j += 1;
			PAIR[j].first = s[i];
			PAIR[j].second = 1;
		}
	}
	int index = 0;
	int m = PAIR[0].second;
	for (int i = 0; i <= j; i++) {
		if (PAIR[i].second > m) {
			m = PAIR[i].second;
			index = i;
		}

	}
	cout << PAIR[index].first;
	return 0;
}