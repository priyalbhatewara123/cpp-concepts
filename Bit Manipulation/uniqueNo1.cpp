//Given a list of numbers where every number occurs twice, except one.
//Find that unique number.

//APPROACH:
//As every number appears twice except one , therefore we can use XOR operator

//Other way is to maintain a frequency array
//but this method is more efficient as it does not use any extra space

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int number;
	cin >> number;
	int res = number;
	for (int i = 1; i < n; i++) {
		cin >> number;
		res = res ^ number;
	}

	cout << res;
	return 0;
}