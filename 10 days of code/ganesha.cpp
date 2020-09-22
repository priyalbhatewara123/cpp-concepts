#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	//first row
	cout << "*";
	for (int i = 1; i <= (n - 3) / 2 ; i++) {
		cout << " ";
	}
	for (int i = 1; i <= (n + 1) / 2 ; i++) {
		cout << "*";
	}
	cout << endl;

	//for next rows between first and middle row
	for (int rows = 1; rows <= (n - 3) / 2; rows++) {
		cout << "*";

		for (int i = 1; i <= (n - 3) / 2 ; i++) {
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}
	//middle row
	for (int i = 1; i <= n; i++) {
		cout << "*";
	}
	cout << endl;

	//for rows below middle and above last
	for (int rows = 1; rows <= (n - 3) / 2; rows++) {
		for (int i = 1; i <= (n - 1) / 2; i++) {
			cout << " ";
		}
		cout << "*";
		for (int i = 1; i <= (n - 3) / 2 ; i++) {
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}

	//last row
	for (int i = 1; i <= (n + 1) / 2 ; i++) {
		cout << "*";
	}
	for (int i = 1; i <= (n - 3) / 2 ; i++) {
		cout << " ";
	}
	cout << "*";


}