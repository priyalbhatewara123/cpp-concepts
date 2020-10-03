//Write a recursive function to multiply 2 numbers a and b without using * operator.

//This can be done by adding a , b number of times.

#include<bits/stdc++.h>
using namespace std;

int multiply(int a, int b) {
	//base case
	if (b == 1) {
		return a;
	}

	return a + multiply(a, b - 1);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a, b;
	cin >> a >> b;

	cout << multiply(a, b);

	return 0;

}