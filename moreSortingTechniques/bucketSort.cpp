/*
(5)
Bucket Sort
Given a list of students with there names and numbers. Sort the list according to the marks.
*/

#include<bits/stdc++.h>
using namespace std;

class Student {
public:
	int marks;
	string name;
};

void bucket_sort(Student s[] , int n) {

	//we will need an array of vector to store students with same marks in one bucket
	vector <Student> v[101]; //assuming marks to be in the range of 0-100

	//O(n) time
	for (int i = 0; i < n; i++) {
		int m = s[i].marks;

		v[m].push_back(s[i]);
	}

	//As we want to find toppers first so reverse the vector
	//reverse(v.begin() , v.end());

	//Iterate over vector and print the students
	for (int i = 100; i >= 0; i--) {

		for (vector<Student>::iterator it = v[i].begin(); it != v[i].end(); it++) {
			cout << (*it).marks << " " << (*it).name << endl;
		}
	}

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Student s[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> s[i].marks >> s[i].name;
	}

	bucket_sort(s, n);

	return 0;
}