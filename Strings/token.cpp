/*
Tokenization using strtok()
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char s[100];
	cin.getline(s, 100);

	//cout << strlen(s) << endl;

	//breaking the character array into tokens on encountering a comma
	char *ptr = strtok(s, ",");
	cout << ptr << endl;
	while (ptr != NULL) {
		ptr = strtok(NULL, ",");
		cout << ptr << endl;
	}
}