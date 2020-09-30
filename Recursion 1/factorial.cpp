//Finding factorial of a number using recursion

#include<bits/stdc++.h>
using namespace std;

int factorialOfN(int n) {

	//base case
	if (n == 1) {
		return 1;
	}

	//recursive call
	return n * factorialOfN(n - 1);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cout << factorialOfN(n);

	return 0;
}