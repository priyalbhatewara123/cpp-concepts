/*
Given a N*N sudoku , N is a perfect square . You have to fill the empty spaces in the sudoku
such that each row , each column and each sub grid(size: root(n) * root(n)) has every number 1 - 9 only once.
*/

#include<bits/stdc++.h>
using namespace std;

//it checks if the number can be placed in the current cell or not
bool isPossible(int num , int r , int c , int mat[][9] , int n) {

	//check if num is already present in that row or column
	for (int i = 0; i < n; i++) {
		if (mat[i][c] == num || mat[r][i] == num)
			return false;
	}

	//now check for subgrid
	int rn = sqrt(n);
	int sx = (r / rn) * rn;
	int sy = (c / rn) * rn;

	for (int i = sx; i < sx + rn; i++) {
		for (int j = sy; j < sy + rn; j++) {
			if (mat[i][j] == num)
				return false;
		}
	}

	return true;
}


bool solveSudoku(int mat[][9] , int r , int c, int n) { // (i,j) will keep track of current element

	//base case
	if (r == n) {

		//sudoko is solved
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return true;
	}

	//if row ends
	if (c == n)
		return solveSudoku(mat, r + 1, 0, n);

	//skip the pre-filled rows
	if (mat[r][c] != 0)
		return solveSudoku(mat, r, c + 1, n);

	//recursive case
	//fill the current cell with possible number
	for (int number = 1; number <= n; number++)
	{
		if (isPossible(number, r, c, mat, n)) {
			mat[r][c] = number;
			bool couldWeSolve = solveSudoku(mat, r, c + 1, n);
			if (couldWeSolve == true)
				return true;
		}
	}

	//backtracking
	mat[r][c] = 0;
	return false;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int mat[9][9] =
	{
		{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	solveSudoku(mat , 0 , 0 , 9);

	return 0;
}