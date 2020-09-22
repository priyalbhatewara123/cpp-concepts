#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	//to reverse complete array
	reverse(arr, arr + n); //last argument is exclusive

	//to reverse a part of array
	reverse(arr , arr + 3);


	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}