//PROBLEM STATEMENT
//We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once.
//Find the unique number. Only use - bitwise operators, and no extra space.

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;

	//we will count number of setbits index wise from right
	//if the unique number has setbit at that index than then total number of setbit will be 3n+1
	//otherwise total setbits will be 3n

	//we will not store elements in array
	//instead we will make a count array of 64 bits to store number of setbits

	int count[64] = {0};   //space complexity - O(1) as array size is fixed
	int no;
	for (int i = 0; i < n; i++) {
		cin >> no;

		//update the count array
		int j = 0; //index in freq array
		while (no > 0) {
			int last_bit = (no & 1);
			count[j] += last_bit;
			j++;
			no = no >> 1;
		}
	}

	int p = 0;
	int sum = 0;
	for (int i = 0; i < 64; i++) {
		if ((count[i] % 3) == 1) {
			sum += pow(2, p);
			p++;
		}

		else {
			p++;
		}
	}

	cout << sum;
	return 0;

}