//PROBLEM STATEMENT:
//you have to book a cab. There are n numbers of cab available near you. You have
//there x and y coordinates. Print the car which is near to you
//Note: if two cars have same distance, then print the car with lesser x coordinate.

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1 , pair<int, int> p2) {
	int d1 = p1.first * p1.first + p1.second * p1.second;
	int d2 = p2.first * p2.first + p2.second * p2.second;

	if (d1 == d2) {
		return p1.first < p2.first;
	}
	return d1 < d2;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//we will use vector of pair to store the coordinates
	int n; cin >> n;
	vector <pair<int, int> > v;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}
	return 0;
}