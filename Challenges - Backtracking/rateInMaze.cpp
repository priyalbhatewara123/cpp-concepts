/*
(2)
Find the rightmost path through which, rat can reach the end.
A path is rightmost, if the rat is at position (i,j), it will always move to (i,j+1), if there exists a path from (i,j+1) to (N,M).
*/

#include<bits/stdc++.h>
using namespace std;

# define MAX 1000

bool rateInMaze(char grid[MAX][MAX] , int sol[MAX][MAX] , int i , int j , int n , int m) {

	//base case
	if (i == n && j == m && grid[i][j] != 'X') {
		sol[i][j] = 1;
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= m; j++) {
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}

	//rat should be inside the grid
	if (i > n || j > m)
		return false;

	if (grid[i][j] == 'X')
		return false;

	sol[i][j] = 1;
	bool rightSuccess = rateInMaze(grid, sol, i, j + 1, n, m);
	if (rightSuccess)
		return true;

	else {
		bool dowmSuccess = rateInMaze(grid, sol, i + 1, j, n, m);
		if (dowmSuccess)
			return true;
		else {
			sol[i][j] = 0;
			return false;
		}
	}

	return false;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;
	char grid[MAX][MAX];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> grid[i][j];
		}
	}
	int sol[MAX][MAX] = {0};
	bool ans = rateInMaze(grid, sol, 0, 0, n - 1, m - 1);

	if (ans == false)
		cout << -1;

	return 0;
}