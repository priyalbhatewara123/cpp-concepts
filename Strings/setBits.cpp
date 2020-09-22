//to count number of set bits in a binary number

#include<bits/stdc++.h>
using namespace std;

//approach first
int coutSetBits1(int n) {
	int ans = 0;
	while (n > 0) {
		ans += (n & 1);
		n = n >> 1;
	}
	return ans;
}

//second approach
//more efficient because time complexity is O(no of setbits)
int coutSetBits2(int n) {
	int ans = 0;
	while (n > 0) {
		n = n & (n - 1);
		ans ++;
	}
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	cout << coutSetBits1(n) << endl;
	cout << coutSetBits2(n) << endl;

	//using inbuilt method
	cout << __builtin_popcount(n);
}