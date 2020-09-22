//find square root of a number without using library function
//find a search space and search there
//here the search space is between 0 to n
//p is for precesion
//overall complexity is O(logn + p) while p is very small so it is almost logn

#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n) {
	int start = 0;
	int end = n;
	int ans = -1;
	while (start <= end) {
		int mid = (start + end) >> 1;
		if (n == mid * mid) {
			return mid;
		}
		else if (n > mid * mid) {
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	//for floating point
	//we will use brute force approach
	// int inc = 0.1;
	// for (int i = 1; i <= p; i++) {
	// 	while (ans * ans <= n) {
	// 		ans = ans + inc;
	// 	}
	// 	ans = ans - inc;
	// 	inc = inc / 10;
	// }

	return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	//int p; cin >> p;
	cout << squareRoot(n);
	return 0;
}