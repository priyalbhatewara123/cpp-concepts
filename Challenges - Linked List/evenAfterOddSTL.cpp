/*
(3)
Using STL:
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	list<int> l;
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		int d; cin >> d;
		l.push_back(d);
	}

	auto ptr = l.begin();
	int j = n;
	while (j--) {
		if ((*ptr) % 2 == 0) {
			l.push_back(*ptr);
			ptr = l.erase(ptr);
		}
		else {
			ptr++;
		}
	}
	for (auto it : l) {
		cout << it << " ";
	}
	return 0;
}

/*
Learn more about erase function here:
http://www.cplusplus.com/reference/list/list/erase/

*/