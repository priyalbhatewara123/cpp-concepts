/*
0-1 Knapsack problem
A thief with bag of capacity c , went on stealing items of some weight and price.
Find the maximum profit he can have.
*/

#include<bits/stdc++.h>
using namespace std;

int profit(int n , int c, int *weight , int *prices) {

	//base case
	if (n == 0 || c == 0)
		return 0;

	//recursive case
	//we have two choices either select the item or not

	//select (start from last item)
	int ans;
	int inc , exc;
	inc = exc = 0;
	if (weight[n - 1] <= c) {
		inc = prices[n - 1] + profit(n - 1 , c - weight[n - 1] , weight , prices);
	}

	//when you exclude the item
	exc = profit(n - 1, c, weight, prices);

	ans = max(inc , exc);
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int weight[] = {1, 2, 3, 5};
	int prices[] = {40, 20, 30, 100};

	int n = 4;
	int c = 7; //capacity

	cout << profit(n, c, weight, prices);

	return 0;
}