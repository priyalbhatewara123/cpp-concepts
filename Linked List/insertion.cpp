/*
Different operations on Linked list
1. Insertion
Insertion can be done at 3 places:
Head
Tail
Middle

2. Deletion
Deletion can be done at 3 places:
Head
Tail
Middle

3. Search
*/

#include<bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* next;

	//constructor
	node(int d) {
		data = d;
		next = NULL;
	}
};

/*we can implement linked list in 2 ways
1. Linked class (object oriented)
2. Functions (procedural programming)
*/

int lengthOfLL(node* head) {
	int length = 0;
	while (head != NULL) {

		length++;
		head = head -> next;
	}

	return length;
}

void insertAtHead(node* &head , int data) { //passing head by reference
	if (head == NULL) {
		head = new node(data);
		return;
	}

	node *n = new node(data);
	n -> next = head;
	head = n;
}

void insertAtTail(node* &head , int data) {

	//corner case
	if (head == NULL) {
		head = new node(data);
		return;
	}

	node* tail = head;
	while (tail-> next != NULL) {
		tail = tail -> next;
	}

	tail -> next = new node(data);
	return;
}

void insertInMiddle(node* &head , int data , int pos) {

	//corner case
	//if there's no linked list or pos = 0
	if (head == NULL or pos == 0) {
		insertAtHead(head, data);
	}

	else if (pos > lengthOfLL(head)) {
		insertAtTail(head, data);
	}

	else {
		node* temp = head;
		int jump = pos - 1;
		while (jump >= 0) {
			temp = temp->next;
			jump--;
		}

		node* n = new node(data);
		n -> next = temp -> next;
		temp -> next = n;
	}
}


void deleteHead(node* &head) {

	//corner case
	if (head == NULL)
		return;

	node* temp = head -> next;
	delete head;
	head = temp;
}


void deleteAtMiddle(node* head , int p) {
	node* temp = head;
	int jumps = p - 1;

	while (jumps > 0) {
		temp = temp -> next;
		jumps--;
	}
	node* n = temp -> next;
	temp -> next = n -> next;
	delete n;
}


void deleteTail(node* head) {
	node* temp = head;
	while (temp->next->next != NULL) {
		temp = temp->next;
	}

	node* n = temp -> next;
	temp -> next = NULL;
	delete n;
}


/* Search operation
In linked list we can perform only linear search as we cannot directly access
any element of linked list
*/

bool search(node* head , int key) {

	while (head != NULL) {
		if (head-> data == key)
			return true;
		head = head -> next;
	}

	return false;
}

//search using recursion
bool searchUsingRecursion(node* head , int key) {

	//base case
	if (head == NULL)
		return false;

	if (head-> data == key)
		return true;

	else {
		return searchUsingRecursion(head->next , key);
	}
}

void printLinkedList(node* head) {  //passing head by value
	while (head != NULL) {
		cout << head->data << " ";
		head = head -> next;
	}

}

ostream& operator<<(ostream &os , node*head) {   //cin and cout are object of class ostream
	//os is another name to cout object
	printLinkedList(head);
	return os;
}
//we can overload >> for taking input using istream class

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* head = NULL;
	insertAtHead(head , 4);
	insertAtHead(head , 2);
	insertAtHead(head , 1);
	insertAtHead(head , 0);

	printLinkedList(head);
	cout << endl;

	insertInMiddle(head, 3, 2);
	printLinkedList(head);
	cout << endl;

	insertAtTail(head, 5);
	printLinkedList(head);
	cout << endl;

	deleteHead(head);
	printLinkedList(head);
	cout << endl;

	deleteAtMiddle(head, 2);
	printLinkedList(head);
	cout << endl;

	deleteTail(head);
	printLinkedList(head);
	cout << endl;

	//prints 1 if element is present otherwise 0
	cout << search(head , 8) << endl;

	cout << searchUsingRecursion(head, 8) << endl;

	//to print whole list we can use operator overloading
	cout << head << endl;
	return 0;
}