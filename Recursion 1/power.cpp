//Write a recursive function to perform power(a,n)

#include<bits/stdc++.h>
using namespace std;

int power(int a , int n) {

	//base case
	if (n == 1) {
		return a;
	}

	//recursive case
	return a * power(a, n - 1);
}

//time complexity - O(logN)
int fast_power(int a, int n) {

	//base case
	if (n == 0)
		return 1;

	//calculate small ans same for odd and even(n)
	int small_ans = fast_power(a, n / 2);
	small_ans *= small_ans;

	//if n is odd
	if (n & 1)
		return a * small_ans;
	else
		return small_ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a, n;
	cin >> a >> n;
	//cout << power(a, n);
	cout << fast_power(a, n);
	return 0;
}