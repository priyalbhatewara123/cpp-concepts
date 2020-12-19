/*
VECTORS:
Vectors are dynamic array that can grow and shrink in size.
*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//initialising the vector container

	// vector <int> v{1, 2, 3, 4, 5};
	// for (int i = 0; i < v.size(); i++) {
	// 	cout << v[i] << " ";
	// }

	vector<int> v(5, 10);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;
	//copying the content of one vector to another
	vector<int> a(v.begin(), v.end());
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	//another way of iterating the vector
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << (*it) << " ";
	}

	//using for each loop
	for (int x : v) {
		cout << x << " ";
	}

	return 0;
}