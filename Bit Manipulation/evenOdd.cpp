//Given a number find whether the number is even or odd
//We can use bitwise & operator to find same.
//This method can be used to get the last bit

#include<bits/stdc++.h>
using namespace std;

void evenOdd(int n) {
	if (n & 1) {
		cout << "Odd";
	}
	else {
		cout << "Even";
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	evenOdd(n);
}