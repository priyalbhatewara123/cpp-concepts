/*
(8)
Sort The Strings
Problem Link: https://hack.codingblocks.com/app/practice/1/1042/problem
*/

#include<bits/stdc++.h>
using namespace std;

string extractToken(string str , int key) {

	//use strtok() func to extract token
	//strtok() inputs and outputs a character array
	char *s = strtok((char *)str.c_str() , " ");
	while (key > 1) {
		s = strtok(NULL , " ");
		key--;
	}

	return (string)s;
}

int convertToInt(string s) {

	int ans = 0;
	int p = 1;
	for (int i = s.length() - 1 ; i >= 0; i--) {
		ans += ((s[i] - '0') * p);
		p = p * 10;
	}

	return ans;
}

bool numericSort(pair<string, string> s1 , pair<string, string> s2) {

	string key1 , key2;
	key1 = s1.second;
	key2 = s2.second;

	return convertToInt(key1) < convertToInt(key2);
}

bool lexoSort(pair<string, string> s1 , pair<string, string> s2) {

	string key1 , key2;
	key1 = s1.second;
	key2 = s2.second;

	return key1 < key2;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	cin.get();

	string a[100];
	for (int i = 0; i < n; i++) {
		getline(cin , a[i]);
	}

	int key; cin >> key;
	string reversed , comparisonType;
	cin >> reversed >> comparisonType;

	//array of pair that stores strings and there tokens
	pair <string, string> strPair[100];

	for (int i = 0; i < n; i++) {
		strPair[i].first = a[i];
		strPair[i].second = extractToken(a[i] , key);
	}

	//sorting
	if (comparisonType == "numeric") {
		sort(strPair , strPair + n , numericSort);
	}
	else {
		sort(strPair , strPair + n , lexoSort);
	}

	//reverse
	if (reversed == "true") {
		for (int i = 0; i < n / 2; i++) {
			swap(strPair[i] , strPair[n - i - 1]);
		}
	}

	//print the output
	for (int i = 0; i < n; i++) {
		cout << strPair[i].first << endl;
	}

	return 0;
}