#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//initialising string using different methods

//method 1
	string s0 = "Hello World";
	cout << "s0 : " << s0 << endl;

//method 2
	string s1("Hello world");
	cout << "s1 : " << s1 << endl;

//copy constructor
//contents of s1 are copied to s2
	string s2(s1);
	cout << "s2 : " << s2 << endl;

//another way of copying the contents of one string to another
	string s3 = s2;
	cout << "s3 : " << s3 << endl;

//making string from character array
	char a[] = {'a', 'b', 'c', '\0'};
	string s4(a);
	cout << "s4 : " << s4 << " " << s4.empty() << endl;
	//empty() function returns 1 if string is empty otherwise 0

//to check if a string is empty or not
	string s5;
	if (s5.empty()) {
		cout << "s5 is empty" << endl;
	}

//appending strings
	s5.append("I love cpp");
	cout << s5 << endl;

//another method
	s5 += " and python";
	cout << "s5 : " << s5 << endl;

//to clear all the content of the strings
	cout << s5.length() << endl;
	s5.clear();
	cout << s5.length() << endl;

//comparing 2 strings
	cout << "s4: " << s4 << endl;
	cout << "s5: " << s5 << endl;

//compare() function returns 0 if the 2 strings are same
	cout << s4.compare(s4) << endl;

//since s4 is bigger than s5 thats why a positive number is returned
	cout << s4.compare(s5) << endl;

//since s5 is smaller than s4 therefore a negative number is returned
	cout << s5.compare(s4) << endl;

//we can use > < operators with string
//these operators are overloaded for strings
//comparision is done on the basis of lexographical order

	if (s4 > s5) {
		cout << "s4 is greater" << endl;
	}

//to find index of a substring
//it returns index of the first character of the string
	string s = "I want to have an apple juice";
	int index = s.find("apple");
	cout << index << endl;

	cout << s << endl;


//to remove a word from a string
	string word = "apple";
	int l = word.length();

//erase function takes index of the starting word(to be removed)
//and number of characters to be removed as parameter
	s.erase(index, l + 1);
	cout << s << endl;

//to iterate over a string
//apart from normal for loop we can use iterator
	string ss = "Mango";
// for (auto it = ss.begin(); it != ss.end(); it++) {
// 	cout << (*it) << " , ";
// }

}