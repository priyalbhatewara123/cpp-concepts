#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//& is used to print the address of the variable
	//with the exception of char variable

	int a = 10;
	cout << &a << endl; //address of a is displayed

	char ch = 'a';
	cout << &ch << endl; //contents of ch is displayed
	//due to operator overloading in case of character variables

	//to print the address of character variable
	//we need to typecast from char * to void *
	cout << (void *)&ch << endl;

	//size of pointer
	int *ptr = &a;
	cout << sizeof(ptr) << endl;

	char *ptr2 ;
	cout << sizeof(ptr2) << endl;

}

