#include<bits/stdc++.h>
using namespace std;

int querySum(int a[100][100], int tli , int tlj , int bri , int brj) {
	int sum, sum1, sum2, sum3;
	sum = a[bri][brj];
	if (tli > 0) {
		sum -= a[tli - 1][brj];
	}

	if (tlj > 0) {
		sum -= a[bri][tlj - 1];
	}

	if (tli > 0 and tlj > 0) {
		sum += a[tli - 1][tlj - 1];
	}

	return sum;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[100][100];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	//auxilary matrix
	int aux[100][100];

	//copying first column as it is
	int j = 0;
	for (int i = 0; i < n; i++) {
		aux[i][j] = a[i][j];
	}

	//doing row wise addition
	for (int row = 0; row < n; row++) {
		for (int col = 1; col < m; col++) {
			aux[row][col] = a[row][col] + aux[row][col - 1];
		}
	}

	//doing col wise addition starting from 2nd row
	for (int col = 0; col < m; col++) {
		for (int row = 1; row < n; row++) {
			aux[row][col] = aux[row][col] + aux[row - 1][col];
		}
	}
	//printing the auxilary matrix
	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < m; j++) {
	// 		cout << aux[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	int queries;
	cin >> queries;

	while (queries--) {
		int tli, tlj, bri, brj;
		cin >> tli >> tlj >> bri >> brj;
		cout << querySum(aux, tli, tlj, bri, brj) << endl;
	}

}