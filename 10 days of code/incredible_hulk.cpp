#include<bits/stdc++.h>
using namespace std;

int countBits(int n) {
	int ans = 0;
	while (n > 0) {
		ans += (n & 1);
		n = n >> 10;
	}
	return ans;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cout << countBits(n) << endl;

}