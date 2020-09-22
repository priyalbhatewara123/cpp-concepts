//program to rotate square array 90 degree anticlockwise
//with STL
//reverse(start , end) function reverses the container from the starting point(inclusive)
//to end(exclusive)

#include <bits/stdc++.h>
using namespace std;

void rotate(int a[][10] , int n) {

	//reversing the rows using STL
	for (int i = 0; i < n; i++) {
		reverse(a[i] , a[i] + n);
	}

	//taking transpose
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j) {
				swap(a[i][j], a[j][i]);
			}
		}
	}
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int a[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	rotate(a, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}