/*
(3)
PROBLEM STATEMENT
Given a string , replace pi with 3.14 (inplace solution)
For eg. xpigh ->  x3.14gh
*/

#include<bits/stdc++.h>
using namespace std;

void replacePi(char a[] , int i) {

	//base case
	if (a[i] == '\0' or a[i + 1] == '\0')
		return;

	//if pie is present at current location
	if (a[i] == 'p' and a[i + 1] == 'i') {

		//shifting + replacement with 3.14
		int j = i + 2;

		//since shifting is to be done from end so take j to the end
		while (a[j] != '\0')
			j++;

		while (j >= i + 2) {
			a[j + 2] = a[j];
			j--;
		}
		a[i] = '3';
		a[i + 1] = '.';
		a[i + 2] = '1';
		a[i + 3] = '4';

		replacePi(a, i + 4);
	}

	//if pie is not present
	else {
		replacePi(a, i + 1);
	}

	return;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char a[50];
	cin >> a;

	replacePi(a, 0);

	cout << a;

	return 0;

}