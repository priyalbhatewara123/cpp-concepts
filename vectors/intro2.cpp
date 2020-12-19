#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//adding user input elements in the vector
	vector<int> v;
	int n; cin >> n;
	for (int i = 0; i < n ; ++i)
	{
		int e; cin >> e;
		v.push_back(e);  //push_back() adds element to the end of vector
	}

	v.pop_back();

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	cout << v.size() << endl; // returns current size of vector

	cout << v.capacity() << endl; //returns size of underlying array

	cout << v.max_size() << endl;//max no. of elements a vector can hold in the worst
	//case according to available memory in the system
}