/*
RAT IN A MAZE
Given a M*N matrix with some cells blocked. Rat can move only forward or downwards.
Print all possible paths from source(0,0) to destination(m-1,n-1).
*/

#include<bits/stdc++.h>
using namespace std;

bool ratInMaze(char maze[][10] , int sol[][10] , int i , int j , int m , int n) {
//i and j are coordinates of current cell and n,m are coordinates of last cell

	//base case
	if (i == m && j == n) {
		sol[m][n] = 1;

		//printing the path
		for (int i = 0; i <= m; i++) {
			for (int j = 0; j <= n; j++) {
				cout << sol[i][j];
			}
			cout << endl;
		}
		cout << endl;
		return true;
	}

	//recursive case

	//1. rat should be inside the grid
	if (i > m || j > n)
		return false;

	//2. cell should not be blocked
	if (maze[i][j] == 'X')
		return false;

	//we will first assume solution exists through current cell
	sol[i][j] = 1;

	bool rightSuccess = ratInMaze(maze, sol, i, j + 1, m, n);
	bool downSuccess = ratInMaze(maze, sol, i + 1, j, m, n);

	//backtracking
	sol[i][j] = 0;

	if (rightSuccess || downSuccess)
		return true;

	return false;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//maze array
	char maze[][10] = {"0000", "00X0", "000X", "0X00"};

	int sol[10][10] = {0}; //to trace the path

	bool ans = ratInMaze(maze, sol, 0, 0, 3, 3);
	if (ans == false)
		cout << "No possible path!";

	return 0;
}