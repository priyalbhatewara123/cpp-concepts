//Phone keypad problem

#include<bits/stdc++.h>
using namespace std;

//2D array that stores characters corresponding to particular number
char keypad[][10] = {"" , "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

//i denotes the index of input array , j denotes the index of output array
void generate_names(char *in , char *out , int i , int j) {

	//base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	//recursive case
	int digit = in[i] - '0';

	//if digit is 0 or 1 then the below for loop doesn't work
	if (digit == 0 or digit == 1)
		generate_names(in, out, i + 1, j);

	for (int k = 0; keypad[digit][k] != '\0' ; k++) {
		//fill the first block
		out[j] = keypad[digit][k];

		//rest will be filled by recursion
		generate_names(in, out, i + 1, j + 1);
	}

	return;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char input[10];
	cin >> input;

	char output[10];

	generate_names(input, output, 0, 0);

	return 0;
}