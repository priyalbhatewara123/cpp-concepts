/*
PROBLEM STATEMENT 4:
Find the number of CB numbers in the string.

0 and 1 are not a CB number.
2,3,5,7,11,13,17,19,23,29 are CB numbers.
Any number not divisible by the numbers in point 2( Given above) are also CB numbers.

CB number once detected should not be sub-string or super-string of any other CB number.
Ex- In 4991, both 499 and 991 are CB numbers but you can choose either 499 or 991, not both.

Further, the CB number formed can only be a sub-string of the string.
Ex - In 481, you can not take 41 as CB number because 41 is not a sub-string of 481.

As there can be multiple solutions,find the maximum number of CB numbers that can be formed from the given string.

Sample Input
5
81615

Sample Output
2

Explanation
61 and 5 are two CB numbers.
*/

#include<bits/stdc++.h>
using namespace std;

//check if the number is CB num or not
bool check(int num) {
	int a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	if (num == 0 || num == 1)
		return false;
	else {
		for (int i = 0; i < 10; i++) {
			if (num == a[i])
				return true;

			else if (num % a[i] == 0)
				return false;
		}
	}
	return true;
}

//check if the number is visited previously
bool isVisited(int *v , int i , int j) {
	for (; i <= j; i++) {
		if (v[i] == 1)
			return true;
	}
	return false;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	string s; cin >> s;
	int count = 0; //to count CB numbers
	int v[n] = {0}; //to keep track of previously visited numbers

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {

			//number to be checked will start from j and go till j+i
			long long num = 0;
			int temp = j;
			while (temp <= j + i) {
				num = num * 10 + (s[temp] - '0');
				temp++;
			}
			if (check(num)) {
				if (!isVisited(v, j, j + i)) {
					count++;
					for (int k = j; k <= (j + i); k++)
						v[k] = 1;
				}
			}
		}
	}

	cout << count;
	return 0;
}