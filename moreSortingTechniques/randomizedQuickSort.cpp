#include<bits/stdc++.h>
using namespace std;

//randomly shuffle the array first
void shuffle(int *a , int start , int end) {
	srand(time(NULL));
	int i, j, temp;
	for (int i = end ; i > 0; i--) {
		//create one random index
		j = rand() % (i + 1);  //generate random index in range of 0 - i
		swap(a[i], a[j]);
	}
}

int partition(int a[] , int s , int e) {

	int i = s - 1; //index for smaller part
	int j = s; //index for larger part

	int pivot = a[e];
	for (; j < e; j++) {
		if (a[j] <= pivot) {
			i = i + 1;
			swap(a[i], a[j]);
		}
	}

	//placing pivot element at correct index
	swap(a[i + 1], a[e]);

	return i + 1;
}

void quickSort(int a[] , int s , int e) {

	//base case
	if (s >= e) {
		return;
	}

	//pivot index
	int p = partition(a, s, e);

	//left part
	quickSort(a, s, p - 1);

	//right part
	quickSort(a, p + 1, e);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	shuffle(a, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	quickSort(a, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}