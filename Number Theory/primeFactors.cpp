/*Find all the prime factors of a number.
METHOD - 1
Using optimised trial divisions
TIME COMPLEXITY - O(sqrt(n))
*/

#include<bits/stdc++.h>
using namespace std;

void printFactors(int n) {

	//we will store all the prime factors and their counts in a vector pair
	vector <pair <int , int > > factors;
	int count = 0;

	for (int i = 2; i * i <= n ; i++) {
		if (n % i == 0) {
			//keep on dividing it by i till it is divisible
			count = 0;
			while (n % i == 0) {
				count++;
				n = n / i;
			}
			factors.push_back(make_pair(i, count));
		}
	}

	if (n != 1) {
		//whatever is left is a prime number
		factors.push_back(make_pair(n, 1));
	}

	//printing the prime factors
	for (auto p : factors) {
		cout << p.first << " " << p.second << endl;
	}
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	printFactors(n);

	return 0;
}