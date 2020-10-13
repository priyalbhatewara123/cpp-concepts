//String generation

#include<bits/stdc++.h>
using namespace std;

void generate_strings(char *in , char *out, int i, int j) {

	//base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	//recursive case
	//one digit at a time
	int digit = 0;
	char ch;
	if (in[i] == '0') {    //to handle single zero
		generate_strings(in, out, i + 1, j);
		return;     //to avoid execution of steps given below
	}
	else {
		digit = in[i] - '0';
		ch = digit + 'A' - 1;

		out[j] = ch;
		generate_strings(in, out, i + 1, j + 1);
	}

	//two digit at a time
	if (in[i + 1] != '\0') {

		int no = 0;

		if (in[i + 1] == '0') {   //for handling 0
			no = digit * 10;
		}
		else {
			int secondDigit = in[i + 1] - '0';
			no = digit * 10 + secondDigit;
		}

		if (no <= 26) {
			ch = no + 'A' - 1;
			out[j] = ch;
			generate_strings(in, out, i + 2, j + 1);
		}
	}

	return;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char input[100]; //store digits
	cin >> input;

	char output[100]; //to store resulting strings

	generate_strings(input, output, 0, 0);

	return 0;
}