/*
(10)
Adjacency list for weighted graph:
An important use case of list is implementing a graph.

Sample Test Case:
Input:
3 3
0 1 4
0 2 3
1 2 4

Output:
Linked List 0 -> (1 4)(2 3)
Linked List 1 -> (0 4)(2 4)
Linked List 2 -> (0 3)(1 4)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	list <pair<int , int> > *l; //l is pointer to array of list

	int v; cin >> v; //v is number of vertices
	l = new list<pair<int , int>> [v];

	int e; cin >> e; //e is number of edges

	for (int i = 0; i < e; i++) {
		int x , y , wt;
		cin >> x >> y >> wt;

		l[x].push_back(make_pair(y, wt));
		//consider graph as bidirectional
		l[y].push_back(make_pair(x, wt));
	}

	//print the list
	for (int i = 0; i < v; i++) {
		cout << "Linked List " << i << " -> ";
		for (auto xp : l[i]) {
			cout << "(" << xp.first << " " << xp.second << ")";
		}
		cout << endl;
	}

	return 0;
}