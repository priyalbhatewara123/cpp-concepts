#include<bits/stdc++.h>
using namespace std;

//clear i th bit from a number
void clear(int n , int i) {
	int mask = ~(1 << i);
	cout << (n & mask);
}

//update a bit at i th index from right to value v
void updateBit(int &n , int i , int v) {

	//first clear the ith bit
	int mask = ~(1 << i);
	int clear_bit = (n & mask);

	int msk = (v << i);
	n = clear_bit | msk;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, i , v;
	cin >> n >> i >> v;
	//clear(n, i);
	updateBit(n , i , v);
	cout << n;
}