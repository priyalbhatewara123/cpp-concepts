//Calculate a to the power n in an efficient manner using bitwise operator
//time complexity of this method is O(log N)
#include<bits/stdc++.h>
using namespace std;

int power_optimised(int a , int n) {
	int ans = 0;
	while (n > 0) {
		int last_bit = (n & 1);
		if (last_bit) {
			ans = ans * a;
		}

		a = a * a;
		n >> 1;
	}

	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a, n;
	cin >> a >> n;

	cout << power_optimised(a, n);

	return 0;
}