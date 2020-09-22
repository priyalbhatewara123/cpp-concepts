#include<bits/stdc++.h>
using namespace std;

int convertToInt(string s) {
	int ans = 0;
	int p = 1;
	for (int i = s.length() - 1; i >= 0; i--) {
		ans += ((int)s[i]) * p;
		p = p * 10;
	}
	return ans;
}

string extractStringAtKey(string s , int key) {
	char *ptr = strtok((char *)s.c_str() , " ");
	while (key > 1) {
		ptr = strtok(NULL , " ");
		key--;
	}
	return (string)ptr;
}

bool num_cmp( pair<string, string> p1 , pair<string, string> p2) {
	string key1 = p1.second;
	string key2 = p2.second;

	return convertToInt(key1) < convertToInt(key2);
}


bool lexico_cmp( pair<string, string> p1 , pair<string, string> p2) {
	string key1 = p1.second;
	string key2 = p2.second;

	return key1 < key2;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cin.get();

	string str[100];

	for (int i = 0; i < n; i++) {
		getline(cin, str[i]);
	}

	int key;
	string reverse;
	string cmp;
	cin >> key >> reverse >> cmp;

	//storing the string ans column in pair
	pair <string, string> strPair[100];
	for (int i = 0; i < n; i++) {
		strPair[i].first = str[i];
		strPair[i].second = extractStringAtKey(str[i], key);
	}

	//sorting
	if (cmp == "lexicographical") {
		sort(strPair, strPair + n, lexico_cmp);
	}

	if (cmp == "numeric") {
		sort(strPair, strPair + n, num_cmp);
	}

	//reversing
	if (reverse == "true") {
		for (int i = 0; i < n / 2; i++) {
			swap(strPair[i], strPair[n - i - 1]);
		}
	}

	//printing the final string
	for (int i = 0; i < n; i++) {
		cout << strPair[i].first << endl;
	}

	return 0;
}