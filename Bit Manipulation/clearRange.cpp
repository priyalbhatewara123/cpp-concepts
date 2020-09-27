#include<bits/stdc++.h>
using namespace std;

//clear a range of bits from index i to index j (index starts from 1)

//EXAMPLE:
//Input: n = 31  i = 4  j = 2
//Output: 17

int clearRange(int n , int i , int j) {
	int mask = ~((-1 << i) ^ (-1 << (j - 1)));

	return (n & mask);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; int i, j;
	cin >> n >> i >> j;
	cout << clearRange(n, i, j);

	//Clear i number of bits from end
	// int mask = (-1 << i);

	// cout << (n & mask);

}