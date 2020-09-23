//COUNTING SORT
//Time Complexity: O(n+k) where n is the number of elements in input array and k is the range of input.
//Auxiliary Space: O(n+k)
//The problem with the previous counting sort was that we could not sort the elements if we have negative numbers in it.

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[n];
	int maxNum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > maxNum) {
			maxNum = a[i];
		}
	}

	int freq[maxNum + 1] = {0};
	for (int i = 0; i < n; i++) {
		freq[a[i]]++;
	}

	for (int i = 0; i <= maxNum; i++) {
		if (freq[i] != 0) {
			while (freq[i]--) {
				cout << i << " ";
			}
		}
	}

	return 0;
}