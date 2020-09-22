#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//n is the number of strings user enters
	int n;
	cin >> n;

	//storing n strings in 2D character array
	char str[10][10];
	cin.get();
	for (int i = 0; i < n; i++) {
		cin.getline(str[i], 10);
	}

	for (int i = 0; i < n; i++) {
		cout << str[i] << endl;
	}

}