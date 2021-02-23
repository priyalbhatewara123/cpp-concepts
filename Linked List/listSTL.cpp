/*
(9)
List STL:
List is doubly linked list (direct access not possible) .
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	list <int> l {10, 2, 10 , 31, 48 , 10};
	//insert an element at the end
	l.push_back(5);

	//iterate and print
	for (auto i : l)
		cout << i << " ";

	cout << endl;
	//sort the list
	l.sort();

	//to reverse the list
	l.reverse();
	for (auto i : l)
		cout << i << " ";
	cout << endl;

	//to get the front element
	cout << l.front() << endl;
	//to remove first element of the list
	l.pop_front();

	//to push an element in front
	l.push_front(4);
	for (auto i : l)
		cout << i << " ";
	cout << endl;
	//to see last element
	cout << l.back() << endl;

	cout << "Printing through iterator: ";
	for (auto it = l.begin() ; it != l.end() ; it ++)
		cout << *it << " ";
	cout << endl;

	//removing an element from list
	l.remove(10); //this will remove all occurences of that element
	for (auto i : l)
		cout << i << " ";

	cout << endl;

	//erase element
	auto it = l.begin();
	it++;
	l.erase(it);
	for (auto i : l)
		cout << i << " ";
	cout << endl;

	//insert element in the list
	it = l.begin();
	++it;
	++it;
	l.insert(it , 100);
	for (auto i : l)
		cout << i << " ";
	cout << endl;
	return 0;
}



