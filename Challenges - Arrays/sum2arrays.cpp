/*
PROBLEM STATEMENT 8:
Write a function that returns the sum of two arrays.

Sample Test Case:

Sample Input
4
1 0 2 9
5
3 4 5 6 7
Sample Output
3, 5, 5, 9, 6, END

*/

#include<bits/stdc++.h>
using namespace std;

void sum(int a[] , int b[], int n , int m) {
	//array that stores sum
	int sumArray[100];
	int i = n - 1; //for traversing array a
	int j = m - 1; //for traversing array b
	int k = 0; //for traversing sum array
	int carry = 0;

	while (i >= 0 and j >= 0) {
		int sum = a[i] + b[j] + carry;
		sumArray[k] =  sum % 10;
		carry = sum / 10;
		i--;
		j--;
		k++;
	}

	while (i >= 0) {
		int sum = a[i] + carry;
		sumArray[k] = sum % 10;
		carry = sum / 10;
		k++;
		i--;
	}

	while (j >= 0) {
		int sum = b[j] + carry;
		sumArray[k] = sum % 10;
		carry = sum / 10;
		k++;
		j--;
	}

	while (carry) {
		sumArray[k] = carry % 10;
		carry = carry / 10;
		k++;
	}

	for (int p = k - 1; p >= 0; p--) {
		cout << sumArray[p] << ", ";
	}
	cout << "END";
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int m; cin >> m;
	int b[m];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sum(a, b, n, m);
	return 0;
}