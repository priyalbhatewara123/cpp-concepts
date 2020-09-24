//Given a number. Set the ith bit from right(last bit has index 0).

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, i;
	cin >> n >> i;
	int mask = (1 << i);

	int ans = n | mask;
	cout << ans;
}