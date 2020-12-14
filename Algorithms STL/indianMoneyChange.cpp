/*
3)
INDIAN MONEY CHANGE:
You have 1, 2 ,5 ,10,20,50,100,200,500,2000 coins/notes.
Given a sum of money , print the minimum number of coins/nots that can sum-up
to that money.
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(int a , int b) {
	return a <= b;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int money; cin >> money;
	int arr[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
	int n = sizeof(arr) / sizeof(int);
	while (money > 0) {

		int index = (lower_bound(arr , arr + n , money, cmp)) - arr - 1;
		cout << index << ", ";
		int m = arr[index];
		cout << m << endl;
		money -= m;
	}

	return 0;

}