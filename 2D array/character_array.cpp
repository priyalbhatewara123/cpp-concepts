#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//initialising character array(method 1)
	char arr[][10] = {{'h', 'e', 'y'}, {'t', 'h', 'e', 'r', 'e'}};
	//a[0] denotes the first row
	cout << arr[0] << endl;
	cout << arr[1] << endl;

	//second method
	//inputing array as list of strings
	char arr2[][10] = {"hey", "there"};
	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[0][1];

	return 0;
}