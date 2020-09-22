//to convert string to a char array
//A way to do this is to copy the contents of the string to char array.
//This can be done with the help of c_str() and strcpy() function.
//The c_str() function is used to return a pointer to an array that contains a null terminated sequence of character representing the current value of the string.

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	int l = s.length();

	char arr[l + 1];

	//copying the contents of string to character array
	strcpy(arr, s.c_str());

	for (int i = 0; i < l; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}