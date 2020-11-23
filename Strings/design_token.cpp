/*
Designing String Tokeniser:
(defining strtok() function)
*/

#include<bits/stdc++.h>
using namespace std;

char *mystrtok(char *str , char delim) {
	static char *input = NULL;

	//first call
	if (str != NULL) {
		input = str;
	}

	//boundary condition
	if (input == NULL) {
		return NULL;
	}

	char *output = new char[strlen(input) + 1];
	int i = 0;
	for (i = 0; input[i] != '\0'; i++) {
		if (input[i] != delim) {
			output[i] = input[i];
		}

		else {
			output[i] = '\0';
			input = input + i + 1;
			return output;
		}
	}

	//corner case
	output[i] = '\0';
	input = NULL;
	return output;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char s[100];
	cin.getline(s, 100);


	char *ptr = mystrtok(s, ',');
	cout << ptr << endl;
	while (ptr != NULL) {
		ptr = mystrtok(NULL, ',');
		cout << ptr << endl;
	}

}